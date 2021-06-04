#ifndef asistan_h_
#define asistan_h_

#include <iostream>
#include "ogrenci.h"
using namespace std;

class Asistan
{
	private:
		string isim;
		string soyisim;
		string mail;
		int kapasite;
		bool isDolu;
		
	public:
		Ogrenci ogrenciListesi[100];
		
		Asistan();
		Asistan(string isim, string soyisim, string mail, int kapasite);
		Asistan(const Asistan& obje);
		Asistan& operator = (const Asistan& obje);
		
		friend ostream& operator << (ostream& out, Asistan& obje);
		
		void asistanOlustur(string isim, string soyisim, string mail, int kapasite);
		void asistanDuzenle();
		
		void setIsim(string isim);
		void setSoyisim(string soyisim);
		void setMail(string mail);
		void setKapasite(int kapasite);
		string getIsim();
		string getSoyisim();
		string getMail();
		int getKapasite();
		bool getIsDolu();
		
};
ostream& operator << (ostream& out, Asistan& obje);
#endif
