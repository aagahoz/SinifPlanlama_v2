#ifndef sinif_h_
#define sinif_h_

#include <iostream>
#include "ogrenci.h"
using namespace std;

class Sinif
{
	private:
		string sinifAdi;
		string sinifYeri;
		int kapasite;
		bool isDolu;
		
	public:
		Ogrenci ogrenciListesi[100];
		
		Sinif();
		Sinif(string sinifAdi, string sinifYeri, int kapasite);
		Sinif(const Sinif& obje);
		Sinif& operator = (const Sinif& obje);
		~Sinif();
		
		void sinifOlustur(string sinifAdi, string sinifYeri, int kapasite);
		
		friend ostream& operator << (ostream& out, Sinif& obje);
	    
		void setSinifAdi(string ad);
		void setSinifYeri(string yer);
		void setSinifKapasite(int kapasite);
		
		string getSinifAdi();
		string getSinifYeri();
		int getKapasite();
		bool getIsDolu();
};
ostream& operator << (ostream& out, Sinif& obje);
#endif