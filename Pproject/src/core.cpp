#include "headers.hpp"
#include "util.hpp"
#include "menu.hpp"
void top_header(){
	std::string  header = "[ " + waktu("hari") + " || " + "PJ Project Management Laporan" + " || " + waktu("tanggal") + " ]";
	std::cout << warna(header, "") << std::endl<<std::endl;;
}

void menu_navigasi(const int &pilihan_menu){
	clearScreen();
	top_header();
	menu_utama(pilihan_menu);
}

void  PROSES_UTAMA(){
	
	menu_navigasi(-1);
		
		int batas_pilih = 5;
		int pilih;
	do{
		pilih = input_angka("Pilih : ");
		if(pilih == 0){
			batas_pilih --;
			std::cout << warna("Apakah ingin keluar/exit ? Tekan Y/n : ", "option");
			char exit;
			std::cin >> exit;
			if(exit == 'Y' || exit ==  'y'){
			break;
			}
			else{continue;}
		}
		switch(pilih){
			case 1 :
					menu_navigasi(pilih);
					std::cout << warna("Ini menu 1 !!\n", "option");
					break;

			case 2 :
				{
					menu_navigasi(pilih);
					std::cout << warna("Ini menu 1 !!\n", "option");
					break;
				}

			default :
				{
					menu_navigasi(pilih);
					std::cout << pilih << std::endl;
					std::cout << warna("Pilihan tidak ada !\n", "error");
					batas_pilih--;
				}
		}

	}while(batas_pilih != 0);
	menu_navigasi(pilih);
	if(batas_pilih == 0){
			std::cout << warna("Mohon maaf melebihi batas inputan\n","option");
		}
	std::cout << "Terima Kasih\n";

}