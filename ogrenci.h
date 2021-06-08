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
		bool isDolu;
		
	public:
		Ogrenci();
		Ogrenci(string isim, string soyisim, string harfNotu, int durum, int numara, int notSayisi);
		Ogrenci(const Ogrenci& ogr);
		Ogrenci& operator=(const Ogrenci& ogr);
		~Ogrenci();
		
		void ogrenciOlustur(int numara, string isim, string soyisim, int durum, string harfNotu);
		void objeBosalt();

		friend ostream& operator << (ostream& out, Ogrenci& obje);
	   	
	   	void setNumara(int numara);
		void setIsim(string isim);
	   	void setSoyisim(string soyisim);
	   	void setHarfnotu(string harfnotu);
	   	void setDurum(int durum);
	   	int getNumara();
		string getIsim();
	   	string getSoyisim();
	   	string getHarfnotu();
	   	int getDurum();
	   	bool getIsDolu();
};
ostream& operator << (ostream& out, Ogrenci& obje);
#endif