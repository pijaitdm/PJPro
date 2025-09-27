#include <iostream>
#include <string>
#include <ctime>

std::string warna(const std::string &teks, const std::string &kondisi){

	if(kondisi == "angka") {return  "\033[1;36m" + teks + "\033[0m";}
	else if(kondisi == "menu") {return  "\033[1;32m" + teks + "\033[0m";}
	else if(kondisi == "error") {return "\033[1;31m" + teks +"\033[0m";}
	else if(kondisi == "option"){return "\033[1;33m" + teks +"\033[0m";}
	return teks;
}


std::string waktu(const std::string &pilih_waktu){
	std::time_t now = std::time(nullptr);
	std::tm *waktu_sistem = std::localtime(&now);
	
	if(pilih_waktu == "tanggal"){
		char tgl[11]; // 
		std::strftime(tgl, sizeof(tgl), "%d-%m-%Y", waktu_sistem);

		return tgl;
	}
	else if(pilih_waktu == "hari"){
		std::string hari[8] = {"Minggu", "Senin", "Selasa",
								"Rabu","Kamis","Jum'at","Sabtu"};
				return hari[waktu_sistem->tm_wday];
	}

	else if(pilih_waktu == "jam"){
		char jam[6];
		std::strftime(jam, sizeof(jam), "%H-%M", waktu_sistem);
		return jam;
	}

		return "\0";
}


int input_angka(const std::string &teks_angka){
	
	int func_input_angka;

	std::cout << warna(teks_angka, "angka");

	std::cin >> func_input_angka;

	bool valid_input_angka = true;
	if(std::cin.fail()){
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << warna("Inputan tidak valid\n", "error");
		valid_input_angka = false;
	}

	if(!valid_input_angka){
		return func_input_angka = 0;
	}
	return func_input_angka;
}

void garis_batas(){
	std::string strip = "-";
	for(int i = 0 ; i < 60; i++){
		std::cout << strip ;
	}
	std::cout << std::endl;
}

void clearScreen() {
    std::cout << "\033[2J\033[1;1H";
}