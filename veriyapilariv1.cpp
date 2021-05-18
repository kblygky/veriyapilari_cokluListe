// veriyapilariv1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.


#include <cstring>
#include <iostream>
#include<fstream>
#include<string>
using namespace std;

struct ders {
	char derskodu[10];
	char dersadi[50];
	ders* sonraki;
};

struct ogrenci {
	char ogrno[15];
	char ad[30];
	char soyad[30];
	ders* dersdugumu;
	ogrenci* sonraki;
};

void bol();
void menu();
void dosyaOku();

int main()
{
	//menu();
	dosyaOku();

}


void menu() 
{
	cout << "\t\t\t---ISLEM MENUSU---\n";
	cout << "Yapmak istediginiz islem icin asagidaki durumlardan birini giriniz...\n";
	cout << "Arama yapmak icin: A\n";
	cout << "Ders silmek icin: D\n";
	cout << "Kesisim bulmak icin: K\n";
	cout << "Listeyi ekrana yazdirmak icin: L\n";
	cout << "Ogrenci silmek icin: O\n";
	cout << "Dosya yaz: Y\n";
	cout << "Cikis icin: C\n";
}

void dosyaOku()
{
	ifstream dosyaOku("..\\..\\..\\Desktop\\fiz101.txt");

	string satir = "";

	if (dosyaOku.is_open()) {
		bool x=false;
		while (getline(dosyaOku, satir)) {
			if (x==false)
			{
				cout << satir;
				x = true;
				continue;
			}
			string no = satir.substr(0, 7);
			satir.erase(0,8);
			
			string soyad;
			string ad;

			for (int i = 0; satir[i] != '\0'; i++) {
				soyad += satir[i];
				if (satir[i] == ' ') {
					soyad = "";
				}
			}

			cout << no << "\n";
			satir.erase(satir.length() - soyad.length());
			cout << satir << "\n";
			cout << soyad << "\n";
			
		}
		dosyaOku.close();
	}
}

void bol() {
	


	
}