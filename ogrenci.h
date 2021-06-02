#ifndef Ogrenci_h_
#define Ogrenci_h_
#include <iostream>
using namespace std;

class Ogrenci
{
	private:
		string isim;
		string soyisim;
		string harfNotu;
		int durum;
		int numara;
		int notSayisi;
		int *notlar;
		
	public:
		Ogrenci();
		Ogrenci(string isim, string soyisim, string harfNotu, int durum, int numara, int notSayisi);
		Ogrenci(const Ogrenci& ogr);
		Ogrenci& operator=(const Ogrenci& ogr);
		//~Ogrenci();
		
		void OgrOlustur(string isim, string soyisim, string harfNotu, int durum, int numara, int notSayisi);
		//void OgrDuzenle();
		
		//int HarfnotuHesapla();
		//string harfnotuCevirici();
		friend ostream& operator << (ostream& out, Ogrenci& obje);
	   	
	   	/*
		void setIsim(string isim);
	   	void setSoyisim(string soyisim);
	   	void setHarfnotu(int harfnotu);
	   	void setDurum(int durum);
	   	void setNumara(int numara);
	   	void setNotsayisi(int notSayisi);
		string getIsim();
	   	string getSoyisim();
	   	int getHarfnotu(int harfnotu);
	   	int getDurum(int durum);
	   	int getNumara(int numara);
	   	int getNotsayisi(int notSayisi);
	   	*/
};
ostream& operator << (ostream& out, Ogrenci& obje);
#endif