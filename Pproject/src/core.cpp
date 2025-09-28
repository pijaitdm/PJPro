#include "headers.hpp"
#include "menu.hpp"



void  PROSES_UTAMA(){
	
	menu_navigasi(-1);
		int batas_pilih = 5;

		int pilih;
		
	do{
			std::cout << warna("HOME\n","option");	
			pilih  = input_angka("Pilih Menu : ");
			if(pilih == 0){
				std::cout << warna("Apakah ingin keluar/exit ? Tekan Y/n : ", "option");
				char exit;
				std::cin >> exit;
					if(exit == 'Y' || exit ==  'y'){
					break;}
					else{continue;}
			}

		switch(pilih){
			case 1 :
					{
					menu_navigasi(pilih);
					submenu(1);
					break;
					}
			case 2 :
					{
					menu_navigasi(pilih);
					submenu(2);
					break;
					}
			case 3 :
					{
					menu_navigasi(pilih);
					std::cout << warna("Ini menu 3 !!\n", "option");
					break;
					}

			default :
					{
					menu_navigasi(pilih);
					std::cout << warna("Pilihan tidak ada!\nkembali ke Home\n\n", "error");
					batas_pilih--;
					break;
					}
		}


	}while(batas_pilih != -1 );
	menu_navigasi(pilih);
		
		if(batas_pilih == -1){
			std::cout << warna("Mohon maaf melebihi batas inputan\n","option");
		}

	std::cout << "Terima Kasih\n";

}


