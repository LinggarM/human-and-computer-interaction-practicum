//Praktikum01B - Menu Datar Menggunakan Pilihan

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {
	int i;
	char jawab;
	
	//Membuat Kotak
	menu:
	system("cls");
	cout << (char)201; for(i=1;i<=27;i++) cout << (char)205;
	cout << (char)187 << endl;
	cout << (char)186; cout << " PENGELOLAAN DATA AKADEMIK ";
	cout << (char)186 << endl;
	cout << (char)186; cout << " JURUSAN INFORMATIKA - FSM ";
	cout << (char)186 << endl;
	cout << (char)200; for(i=1;i<=27;i++) cout << (char)205;
	cout << (char)188 << endl;
	
	//Membuat Menu
	cout << (char)201; for(i=1;i<=57;i++) cout << (char)205;
	cout << (char)187 << endl;
	cout << (char)186; cout << "                           MENU                          ";
	cout << (char)186 << endl;
	cout << (char)204; for(i=1;i<=57;i++) cout << (char)205;
	cout << (char)185 << endl;
	cout << (char)186; cout << " [1] Lihat Daftar Mahasiswa\t[5] Edit Data Mahasiswa   ";
	cout << (char)186 << endl;
	cout << (char)186; cout << " [2] Lihat Daftar Dosen\t[6] Edit Data Dosen       ";
	cout << (char)186 << endl;
	cout << (char)186; cout << " [3] Lihat Daftar Mata Kuliah\t[7] Edit Data Mata Kuliah ";
	cout << (char)186 << endl;
	cout << (char)186; cout << " [4] Lihat Jadwal Kuliah\t[8] Keluar                ";
	cout << (char)186 << endl;
	cout << (char)200; for(i=1;i<=57;i++) cout << (char)205;
	cout << (char)188 << endl;
	
	//Membuat Pertanyaan
	while (1) {
		cout << "\n\nMasukkan nomor pilihan Anda: ";
		cin >> jawab;
		switch (jawab) {
			case '1' : system("cls");
						cout << "\nAnda berada di menu Lihat Daftar Mahasiswa";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '2' : system("cls");
						cout << "\nAnda berada di menu Lihat Daftar Dosen";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '3' : system("cls");
						cout << "\nAnda berada di menu Lihat Daftar Mata Kuliah";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '4' : system("cls");
						cout << "\nAnda berada di menu Lihat Jadwal Kuliah";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '5' : system("cls");
						cout << "\nAnda berada di menu Edit Data Mahasiswa";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '6' : system("cls");
						cout << "\nAnda berada di menu Edit Data Dosen";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '7' : system("cls");
						cout << "\nAnda berada di menu Edit Data Mata Kuliah";
						cout << "\nSilahkan tekan <enter> untuk keluar..";
						getch();
						goto menu;
						break;
			case '8' : exit(0);
			default : 	cout << "\nJawaban tidak valid, silahkan ulangi";
						getch();
						goto menu;
						break;
			}
	}
	return 0;
}
