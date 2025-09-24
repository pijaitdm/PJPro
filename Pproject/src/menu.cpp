#include "headers.hpp"

void menu_utama(const int &pilih_menu){

	std::string menu_list[3] = {"[1].Input Laporan ","[2].LBB ", "[3].Tools "};
	std::string menu_option[2] = {"[].Home ","[0].Exit"};

	if(pilih_menu > 0 && pilih_menu < 4){
		menu_list[pilih_menu - 1] = warna(menu_list[pilih_menu-1],"menu");
		}
	if(pilih_menu < 0 || pilih_menu > 3){
		menu_option[0] = warna(menu_option[0], "menu");		
	}
	if(pilih_menu == 0 ){
		menu_option[1] = warna(menu_option[1], "menu");
	}

	std::cout << menu_option[0];
	for(int i =  0; i < 3 ; ++i){std::cout << menu_list[i];}
	std::cout << menu_option[1] << std::endl;;
}

void submenu(const int &pilih_submenu){
	
}