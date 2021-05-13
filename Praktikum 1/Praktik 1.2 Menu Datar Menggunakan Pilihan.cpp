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
	cout << "\nMENU : [1] Lihat Daftar Mahasiswa";
	cout << "\n       [2] Lihat Daftar Dosen";
	cout << "\n       [3] Lihat Daftar Mata Kuliah";
	cout << "\n       [4] Keluar";
	
	//Membuat Pertanyaan
	while (1) {
		cout << "\n\nMasukkan nomor pilihan Anda: ";
		cin >> jawab;
		switch (jawab)
			{
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
			case '4' : exit(0);
			}
	}
	return 0;
}
