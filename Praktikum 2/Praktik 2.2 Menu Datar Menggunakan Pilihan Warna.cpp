//Praktikum02B - Menu Datar Menggunakan Pilihan Warna

#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void naik(int posisi);
void turun(int posisi);
void pergike(int a,int b);
void warna(int w);

const string menu0 = "MENU",
			 menu1 = "[1] Lihat Daftar Mahasiswa",
			 menu2 = "[2] Lihat Daftar Dosen",
			 menu3 = "[3] Lihat Daftar Mata Kuliah",
			 menu4 = "[4] Keluar (Esc)";
int posisi;

int main() {
	COORD koor;
	int i;
	char tekan;
	
	home :
		
	//Membuat kotak
	system("cls");
	cout << (char) 201; for(i=1; i<=27; i++) cout << (char) 205;
	cout << (char) 187 << endl;
	cout << (char) 186; cout << " PENGELOLAAN DATA AKADEMIK ";
	cout << (char) 186 << endl;
	cout << (char) 186; cout << " JURUSAN INFORMATIKA - FSM ";
	cout << (char) 186 << endl;
	cout << (char) 200; for(i=1; i<=27; i++) cout << (char) 205;
	cout << (char) 188 << endl;
	
	//Membuat menu
	cout << endl;
	cout << menu0 << endl;
	cout << menu1 << endl;
	cout << menu2 << endl;
	cout << menu3 << endl;
	cout << menu4 << endl;
	
	//Program utama
	posisi = 7;
	warna(154);
	pergike(1,posisi);
	cout << menu1;
	while(tekan != 27) {
		tekan = getch();
		switch(tekan)
		{
			case 72 : {
				naik(posisi);
				if(posisi != 7) posisi--;
				else posisi = 10;
				break;
			};
			case 80 : {
				turun(posisi);
				if(posisi != 10) posisi++;
				else posisi = 7;
				break;
			};
			case 13 : {
				switch(posisi) {
					case 7 : {
						warna(15);
						system("cls");
						cout << "Anda berada di menu " << menu1 << endl;
						cout << "Tekan <enter> untuk kembali.";
						getch();
						goto home;
					}
					case 8 : {
						warna(15);
						system("cls");
						cout << "Anda berada di menu " << menu2 << endl;
						cout << "Tekan <enter> untuk kembali.";
						getch();
						goto home;
					}
					case 9 : {
						warna(15);
						system("cls");
						cout << "Anda berada di menu " << menu3 << endl;
						cout << "Tekan <enter> untuk kembali.";
						getch();
						goto home;
					}
					case 10: {
						goto keluar;
					}
				}
			}
		}
	}
	keluar:
	pergike(1,11);
	warna(15);
	cout << "\n\nTerima kasih, tekan <enter> sekali lagi untuk keluar..";
	getch();
	return 0;
}

void naik(int posisi) {
	switch(posisi) {
		case 7 : {
			warna(15);
			pergike(1,posisi);
			cout << menu1;
			warna(154);
			pergike(1,posisi+3);
			cout << menu4;
			break;
		};
		case 8 : {
			warna(15);
			pergike(1,posisi);
			cout << menu2;
			warna(154);
			pergike(1,posisi-1);
			cout << menu1;
			break;
		};
		case 9 : {
			warna(15);
			pergike(1,posisi);
			cout << menu3;
			warna(154);
			pergike(1,posisi-1);
			cout << menu2;
			break;
		};
		case 10 : {
			warna(15);
			pergike(1,posisi);
			cout << menu4;
			warna(154);
			pergike(1,posisi-1);
			cout << menu3;
			break;
		};
	}
}

void turun(int posisi) {
	switch(posisi) {
		case 7 : {
			warna(15);
			pergike(1,posisi);
			cout << menu1;
			warna(154);
			pergike(1,posisi+1);
			cout << menu2;
			break;
		};
		case 8 : {
			warna(15);
			pergike(1,posisi);
			cout << menu2;
			warna(154);
			pergike(1,posisi+1);
			cout << menu3;
			break;
		};
		case 9 : {
			warna(15);
			pergike(1,posisi);
			cout << menu3;
			warna(154);
			pergike(1,posisi+1);
			cout << menu4;
			break;
		};
		case 10 : {
			warna(15);
			pergike(1,posisi);
			cout << menu4;
			warna(154);
			pergike(1,posisi-3);
			cout << menu1;
			break;
		};
	}
}

void pergike(int a, int b) {
	COORD koor;
	koor.X = a-1;
	koor.Y = b-1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), koor);
}
void warna(int w) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);;
}
