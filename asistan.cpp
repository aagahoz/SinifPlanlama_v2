#include "asistan.h"
#include <string>

Asistan::Asistan()
{
	isim = "bilinmiyor";
	soyisim = "bilinmiyor";
	mail = "bilinmiyor";
	kapasite = 0;	
}
Asistan::Asistan(string isim, string soyisim, string mail, int kapasite)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->mail = mail;
	this->kapasite = kapasite;
}
Asistan::Asistan(const Asistan& obje)
{
	this->isim = obje.isim;
	this->soyisim = obje.soyisim;
	this->mail = obje.mail;
	this->kapasite = obje.kapasite;
}
Asistan& Asistan::operator = (const Asistan& obje)
{
	this->isim = obje.isim;
	this->soyisim = obje.soyisim;
	this->mail = obje.mail;
	this->kapasite = obje.kapasite;
	return *this;
}
ostream& operator << (ostream& out, Asistan& obje)
{
	 out << "Asistan ismi >			"<< obje.isim << endl;
	 out << "Asistan soyismi > 		"<< obje.soyisim << endl;
	 out << "Asistan maili > 			"<< obje.mail << endl;
	 out << "Asistan max kapesite > 	"<< obje.kapasite << endl;
	 return out;
}
void Asistan::asistanOlustur(string isim, string soyisim, string mail, int kapasite)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->mail = mail;
	this->kapasite = kapasite;
}


void Asistan::asistanDuzenle()
{
	int secim;
	string yeni_ad;
	string yeni_soyisim;
	string yeni_mail;
	int yeni_kapasite;
	cout << "Duzenlemek istediğiniz asistan bilgisini seciniz!" << endl;
	cout << "Asistan ismi icin----------> 1" << endl;
	cout << "Asistan soyismi icin--------> 2" << endl;
	cout << "Asistan maili icin-----------> 3" << endl;
	cout << "Asistan kapesitesi icin-------> 4" << endl;
	cout << "Giriniz > ";
	cin >> secim;
	switch (secim)
	{
		case 1:
			cout << "Asistan ismi duzenleme secildi" << endl;
			cout << "Yeni isim bilgisi giriniz >  ";
			cin >> yeni_ad;
			this->isim = yeni_ad;
			break;
		case 2:
		       cout << "Asistan soyismi duzenleme secildi" << endl;
		       cout << "Yeni soyisim bilgisi giriniz > " << endl;
		       cin >> yeni_soyisim;
		       this->soyisim = yeni_soyisim;
		       break;    
		case 3:
			cout << "Asistan maili düzenleme secildi" << endl;
			cout << "Yeni mail bilgisini giriniz > " << endl;
			cin >> yeni_mail;
			this->mail = yeni_mail;
			break;
		case 4:
			cout << "Asistan kapasitesi düzenleme secildi" << endl;
			cout << "Yeni kapasite bilgisini giriniz > " << endl;
			cin >> yeni_kapasite;
			this->kapasite = yeni_kapasite;
			break;
		default:
			cout<<"Hatali secim yaptiniz, Lutfen yeniden deneyiniz!";
	}
}

void Asistan::setIsim(string isim)			{	this->isim = isim;			}
void Asistan::setSoyisim(string soyisim)	{	this->soyisim = soyisim;	}
void Asistan::setMail(string mail)			{	this->mail = mail;			}
void Asistan::setKapasite(int kapasite)		{	this->kapasite = kapasite;	}
int Asistan::getKapasite()					{	return kapasite;			}
string Asistan::getSoyisim()				{	return soyisim;				}
string Asistan::getIsim()					{	return isim;				}
string Asistan::getMail()					{	return mail;				}
