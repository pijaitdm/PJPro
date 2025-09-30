#include "headers.hpp"
#include "menu.hpp"


void  PROSES_UTAMA(){
	
	menu_navigasi(-1);
		int batas_pilih = 5;

		int pilih;
		
	do{
			std::cout << warna("HOME\n","option");	
			garis_batas();
			pilih  = input_angka("Pilih Menu : ");
			if(pilih == 0){
				std::cout << warna("Apakah ingin keluar/exit ? Tekan Y/n : ", "option");
				char exit;
				std::cin >> exit;
					if(exit == 'Y' || exit ==  'y'){
					break;}
					else{continue;}
			}
			menu_navigasi(pilih);
				if(pilih == 1){
					submenu(1);
				}
				else if(pilih == 2){
					submenu(2);
				}
				else if(pilih == 3){
					submenu(3);
				}
				else{
					std::cout << warna("Pilihan tidak ada!\nkembali ke Home\n\n", "error");
					batas_pilih--;
					
				}
					
	}while(batas_pilih != -1 );
	menu_navigasi(pilih);
		
		if(batas_pilih == -1){
			std::cout << warna("Mohon maaf melebihi batas inputan\n","option");
		}

	std::cout << "Terima Kasih\n";

}


