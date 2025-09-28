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
	std::vector<std::string>submenu_1 = {"[1].input UE LCR ", "[2].input UE harian ", "[3].input ue visit/minggu"};
	std::vector<std::string>submenu_2 = {"[1].Laporan Bulanan ","[2].Laporan LCR ","[3].Laporan Stok"};

	if(pilihSubmenu == 1){return submenu_1;}
	else if(pilihSubmenu == 2){return submenu_2;}
	return {"kosong"};
}

void submenu_switch(const int &pilih_proses, const int &pilih_switch){
	if(pilih_proses == 1){
		std::vector<std::string> submenu_list1 = submenu_arr(pilih_proses);
		if(pilih_switch >= 1 && pilih_switch <= 3){
			submenu_list1[pilih_switch -1] = warna(submenu_list1[pilih_switch -1],"menu");
		}
		for(const auto &cetak : submenu_list1){std::cout << cetak;}
			std::cout << std::endl;
	}

	else if(pilih_proses == 2){
		std::vector<std::string> submenu_list2 = submenu_arr(pilih_proses);
		if(pilih_switch >= 1 && pilih_switch <= 3){
			submenu_list2[pilih_switch -1] = warna(submenu_list2[pilih_switch -1],"menu");
		}
		for(const auto &cetak : submenu_list2){std::cout << cetak;}
			std::cout << std::endl;
	}
}


void menu_navigasi(const int &pilihan){
	clearScreen();
	top_header();
	garis_batas();
	menu_utama(pilihan);
}

void proses_pemilihan_submenu(const int &pilih_menu, const int &pilih_submenu){

menu_navigasi(pilih_menu);
submenu_switch(pilih_menu,pilih_submenu);

//MENU 1
if(pilih_menu == 1 && pilih_submenu == 1){
	std::cout << "TODO PROSES INPUT UE LCR\n";	
}

else if(pilih_menu == 1 && pilih_submenu ==  2){
	std::cout << "TODO PROSES INPUT UE HARIAN\n";	
}

else if(pilih_menu == 1 && pilih_submenu == 3){
	std::cout << "TODO PROSES INPUT UE VISIT/MINGGU\n";	
}

//MENU 2 
else if(pilih_menu == 2 && pilih_submenu == 1){
	std::cout << "TODO PROSES LAPORAN BULANAN\n";	
}

else if(pilih_menu == 2 && pilih_submenu == 2){
std::cout << "TODO PROSES LAPORAN LCR\n";
}

else if(pilih_menu == 2 && pilih_submenu == 3){
std::cout << "TODO PROSES LAPORAN STOK\n";
}

}

void submenu(const int &pilih_menu){

	submenu_switch(pilih_menu,-1);

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
						proses_pemilihan_submenu(pilih_menu,pilih_submenu);
						break;
					}
			case 2 :
					{	
						proses_pemilihan_submenu(pilih_menu,pilih_submenu);
						break;
					}
			case 3 :
					{	
						proses_pemilihan_submenu(pilih_menu,pilih_submenu);
						break;
					}
		}

	}while(batas_pilih_submenu!=0);
	menu_navigasi(-1);
}	
