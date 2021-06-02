#ifndef asistan_h_
#define asistan_h_

#include <iostream>

using namespace std;

class Asistan
{
	private:
		string isim;
		string soyisim;
		string mail;
		int kapasite;
		
	public:
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

};
ostream& operator << (ostream& out, Asistan& obje);
#endif