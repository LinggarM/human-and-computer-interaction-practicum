//Praktikum01A - Menu Datar Sederhana

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	int i ;
	char nama[20];
	char jawab;
	
	//Membuat kotak
	cout << (char) 201; for(i=1; i<= 26; i++) cout << (char) 205;
	cout << (char) 187 << endl;
	cout << (char) 186; cout << "      SELAMAT DATANG      ";
	cout << (char) 186 << endl;
	cout << (char) 186; cout << "            DI            ";
	cout << (char) 186 << endl;
	cout << (char) 186; cout << " MENU DATAR BERBASIS TEKS ";
	cout << (char) 186 << endl;
	cout << (char) 200; for (i=1; i<=26; i++) cout << (char) 205;
	cout << (char) 188 << endl;
	
	//Membuat Pertanyaan
	while(1) {
		cout << "\n\nMasukkan nama Anda : ";
		cin >> nama;
		cout << "Anda yakin nama Anda \"" << nama << "\" [Y/T] ? ";
		cin >> jawab;
		
		if((jawab =='Y') | (jawab =='y')) break;
	}
	
	cout << "\n\nBaiklah " << nama << ", tekan <enter> untuk mengakhiri..";
	getch();
	return 0;
}
