#include "headers.hpp"


void penghitung_shim(const int &pilih){
	float celah_valve_standart_in = 0.15;
	float celah_valve_standart_ex = 0.25;

//IN
	if(pilih == 1){
		float celah_valve_in;
		float ukuran_shim_lama_in;
		std::cout << warna("Masukan Jarak renggang Klep in = ","option");
		std::cin >> celah_valve_in;

		std::cout << warna("Masukan Ukuran Shim in = ","option");
		std::cin >> ukuran_shim_lama_in;

		float shim_baru_in = (celah_valve_in - celah_valve_standart_in)+ukuran_shim_lama_in;
		garis_batas();
		std::cout << warna("ukuran shim baru IN = ","option") <<  shim_baru_in <<std::endl;
	}
//EX
	else if(pilih == 2){
		float celah_valve_ex;
		float ukuran_shim_lama_ex;
		std::cout << warna("Masukan Jarak renggang Klep ex = ","option");
		std::cin >> celah_valve_ex;

		std::cout << warna("Masukan Ukuran Shim ex = ","option");
		std::cin >> ukuran_shim_lama_ex;

		float shim_baru_ex = (celah_valve_ex - celah_valve_standart_ex)+ukuran_shim_lama_ex;
		garis_batas();
		std::cout << warna("ukuran shim baru EX = ","option") <<shim_baru_ex << std::endl;
	}


}



void proses_shimKlep(){
	int exit = 1;
	while(exit != 0){
		std::cout << warna("\nUntuk Klep [1].IN / [2].EX = ", "option");
		int pilih = input_angka("");

			if(pilih == 1 || pilih == 2){
				penghitung_shim(pilih);
			}

			else{
				std::cout << warna("Pilihan tidak ada\n", "error");

			}
		exit = input_angka("lagi tekan ( 1 ) : ");
		if(exit == 0){
			std::cout << "kembali ke submenu\n";
		}

	}
	garis_batas();
}