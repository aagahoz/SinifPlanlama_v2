#ifndef sinif_h_
#define sinif_h_
#include <iostream>
using namespace std;

class Sinif
{
	private:
		string sinifAdi;
		string sinifYeri;
		int kapasite;
		
	public:
		Sinif();
		Sinif(string sinifAdi, string sinifYeri, int kapasite);
		Sinif(const Sinif& obje);
		Sinif& operator = (const Sinif& obje);
		
		void sinifOlustur(string sinifAdi, string sinifYeri, int kapasite);
		void sinifDuzenle();
		
		friend ostream& operator << (ostream& out, Sinif& obje);
	    
		void setSinifAdi(string ad);
		void setSinifYeri(string yer);
		void setSinifKapasite(int kapasite);
		
		string getSinifAdi();
		string getSinifYeri();
		int getKapasite();
};

ostream& operator << (ostream& out, Sinif& obje);
#endif