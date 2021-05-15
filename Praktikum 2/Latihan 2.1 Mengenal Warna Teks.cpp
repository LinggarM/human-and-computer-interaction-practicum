//Praktikum02A - Mengenal Warna Teks
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main() {
	int i;
	
	//membuat teks berwarna
	for (i=0;i<=255;i++) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
		cout << "C" << i << " ";
		if (i % 30 == 0) cout << endl;
	}
	
	getch();
	return 0;
}
