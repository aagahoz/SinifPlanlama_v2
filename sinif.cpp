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

Sinif::~Sinif() {}

void Sinif::sinifOlustur(string sinifAdi, string sinifYeri, int kapasite)
{
	this->sinifAdi = sinifAdi;
	this->sinifYeri = sinifYeri;
	this->kapasite = kapasite;
	this->isDolu = true;
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
	  out << " > "<< s.sinifAdi << "  ";
	  out << s.sinifYeri << "  ";
	  out << s.kapasite;
	  return out;	
}