#include <vector>
#include "headers.hpp"

void top_header(){
	std::string  header = "[ " + waktu("hari") + " || " + "PJ Project Management Laporan" + " || " + waktu("tanggal") + " ]";
	std::cout << warna(header, "") << std::endl<<std::endl;;
}

void menu_utama(const int &pilih_menu){

	std::string menu_list[3] = {"[1].Input Laporan ","[2].LBB ", "[3].Tools "};
	std::string menu_option[2] = {"[].Home ","[0].Exit"};

	if(pilih_menu > 0 && pilih_menu < 4){
		menu_list[pilih_menu - 1] = warna(menu_list[pilih_menu-1],"menu");
		}
	else if(pilih_menu < 0 || pilih_menu > 3){
		menu_option[0] = warna(menu_option[0], "menu");		
	}
	else if(pilih_menu == 0 ){
		menu_option[1] = warna(menu_option[1], "menu");
	}

	std::cout << menu_option[0];
	for(int i =  0; i < 3 ; ++i){std::cout << menu_list[i];}
	std::cout << menu_option[1] << std::endl;
	
}



std::vector<std::string> submenu_arr(const int &pilihSubmenu){
	std::vector<std::string>submenu_1 = {"[1].input UE LCR ", "[2].input UE harian ", "[3].input part bongkaran"};
	std::vector<std::string>submenu_2 = {"[1].Laporan Bulanan ","[2].Laporan LCR ","[3].Laporan Stok"};

	if(pilihSubmenu == 1){
		return submenu_1;
	}
	else if(pilihSubmenu == 2){
		return submenu_2;
	}
	return {"kosong"};
}

void submenu_1(const int &pilih_proses1){

	std::vector<std::string> submenu_list = submenu_arr(1); // sub menu
		if(pilih_proses1 >= 1 && pilih_proses1 <= 3){
			submenu_list[pilih_proses1 -1] = warna(submenu_list[pilih_proses1 -1],"menu");
		}

		for(const auto &cetak : submenu_list){std::cout << cetak;}
		std::cout << std::endl;

}
void submenu_2(const int &pilih_proses2){

	std::vector<std::string> submenu_list = submenu_arr(2); // sub menu
		if(pilih_proses2 >= 1 && pilih_proses2 <= 3){
			submenu_list[pilih_proses2 -1] = warna(submenu_list[pilih_proses2 -1],"menu");
		}

		for(const auto &cetak : submenu_list){std::cout << cetak;}
		std::cout << std::endl;

}	

void menu_navigasi(const int &pilihan){
	clearScreen();
	top_header();
	garis_batas();
	menu_utama(pilihan);
}

void submenu_navigasi(const int &pilihan_submenu){
	clearScreen();
	top_header();
	menu_utama(pilihan_submenu);
}

void submenu(const int &pilih_menu){

	if(pilih_menu == 1){
		submenu_1(-1);
	}

	else if(pilih_menu == 2){
		submenu_2(-1);
	}

	garis_batas(); 
	int batas_pilih_submenu = 5;
	do{
		int pilih_submenu = input_angka("Pilih SubMenu : ");
		if(pilih_submenu > 3){
			std::cout << warna("pilihan tidak ada\n", "error");
			batas_pilih_submenu--;
		}

		else if(pilih_submenu == 0 || batas_pilih_submenu == 0){
			break;
		}

		switch(pilih_submenu){
			case 1 :
					{	
					if(pilih_menu == 1){
					submenu_navigasi(1);
					submenu_1(pilih_submenu);	
						std::cout << std::endl;
						std::cout << warna("Ini menu sub 1!!\n", "option");
						break;
					}
					else if(pilih_menu == 2){
					submenu_navigasi(2);
					submenu_2(pilih_submenu);	
						std::cout << std::endl;
						std::cout << warna("Ini menu sub 2!!\n", "option");
						break;
					}

					}
			case 2 :
					{	
					if(pilih_menu == 1){
					submenu_navigasi(1);
					submenu_1(pilih_submenu);	
						std::cout << std::endl;
						std::cout << warna("Ini menu sub 2!!\n", "option");
						break;
					}
					else if(pilih_menu == 2){
					submenu_navigasi(2);
					submenu_2(pilih_submenu);	
						std::cout << std::endl;
						std::cout << warna("Ini menu sub 2!!\n", "option");
						break;
					}
					}
			case 3 :
					{	
					if(pilih_menu == 1){
					submenu_navigasi(1);
					submenu_1(pilih_submenu);	
						std::cout << std::endl;
						std::cout << warna("Ini menu sub 3!!\n", "option");
						break;
					}
					else if(pilih_menu == 2){
					submenu_navigasi(2);
					submenu_2(pilih_submenu);	
						std::cout << std::endl;
						std::cout << warna("Ini menu sub 3!!\n", "option");
						break;
					}
					}
		}

	}while(batas_pilih_submenu!=0);
	submenu_navigasi(0);
}	
