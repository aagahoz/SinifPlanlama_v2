#include "sinif.h"
#include <string>

Sinif::Sinif()
{
	this->sinifAdi = "bilinmiyor";
	this->sinifYeri = "bilinmiyor";
	this->kapasite = 0;
	this->isDolu = false;
}
Sinif::Sinif(string sinifAdi, string sinifYeri, int kapasite)
{
	this->sinifAdi = sinifAdi;
	this->sinifYeri = sinifYeri;
	this->kapasite = kapasite;
	this->isDolu = true;
}
Sinif::Sinif(const Sinif& obje)
{
	this->sinifAdi = obje.sinifAdi;
	this->sinifYeri = obje.sinifYeri;
	this->kapasite = obje.kapasite;
	this->isDolu = true;
}
Sinif& Sinif::operator = (const Sinif& obje)
{
	this->sinifAdi = obje.sinifAdi;
	this->sinifYeri = obje.sinifYeri;
	this->kapasite = obje.kapasite;
	this->isDolu = true;
	return *this;
}

void Sinif::sinifOlustur(string sinifAdi, string sinifYeri, int kapasite)
{
	this->sinifAdi = sinifAdi;
	this->sinifYeri = sinifYeri;
	this->kapasite = kapasite;
	this->isDolu = true;
}
void Sinif::sinifDuzenle()
{
	string yeni_ad;
	string yeni_yer;
	int yeni_kapasite;
	int secim;
	cout << "Lutfen duzenlemek istediginiz secenegi giriniz!" << endl;
	cout << "Sinif adini duzenlemek icin--------1" << endl;
	cout << "Sinif yerini duzenlemek icin--------2" << endl;
	cout << "Sinif kapesitesini duzenlemek icin---3" << endl;
	cout << "Giriniz > ";
	cin >> secim;
	switch(secim)
	{
		case 1:
			cout << "Sinif adi duzenleme secildi!" << endl;
			cout << "Lutfen yeni sinif ismini giriniz > ";
			cin >> yeni_ad;
			this->sinifAdi = yeni_ad;
			break;
		case 2:
			cout << "Sinif yeri duzenleme secildi!" << endl;
			cout << "Lutfen yeni sinif yerini giriniz > ";
			cin >> yeni_yer;
			this->sinifYeri = yeni_yer;
			break;
		case 3:
			cout << "Sinif kapesitesi duzenleme secildi!" << endl;
			cout << "Lutfen yeni sinif kapasitesi giriniz > ";
			cin >> yeni_kapasite;
			this->kapasite = yeni_kapasite;
			break;
		default:
			cout << "Hatali secim yaptiniz.Lutfen tekrar deneyiniz!";		
	}
}

void Sinif::setSinifAdi(string ad)									{	this->sinifAdi=ad;			}
void Sinif::setSinifKapasite(int kapasite)							{	this->kapasite=kapasite;	}
void Sinif::setSinifYeri(string yer)								{	this->sinifYeri=yer;		}
string Sinif::getSinifAdi()											{	return sinifAdi;			}
int Sinif::getKapasite()											{	return kapasite;			}
string Sinif::getSinifYeri()										{	return sinifYeri;			}
bool Sinif::getIsDolu()												{	return isDolu;				}

ostream& operator << (ostream& out, Sinif& s)
{
	  out << "Sinif Adi >			" << s.sinifAdi << endl;
	  out << "Sinif Yeri >			" << s.sinifYeri << endl;
	  out << "Sinif Kapasitesi >		" << s.kapasite << endl << endl;
	  return out;	
}



