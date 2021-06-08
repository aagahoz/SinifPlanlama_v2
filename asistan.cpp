#include "asistan.h"
#include <string>

Asistan::Asistan()
{
	isim = "bilinmiyor";
	soyisim = "bilinmiyor";
	mail = "bilinmiyor";
	kapasite = 0;
	isDolu = 0;
}

Asistan::Asistan(string isim, string soyisim, string mail, int kapasite)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->mail = mail;
	this->kapasite = kapasite;
	this->isDolu = 1;
}

Asistan::Asistan(const Asistan& obje)
{
	this->isim = obje.isim;
	this->soyisim = obje.soyisim;
	this->mail = obje.mail;
	this->kapasite = obje.kapasite;
	this->isDolu = 1;
}

Asistan& Asistan::operator = (const Asistan& obje)
{
	this->isim = obje.isim;
	this->soyisim = obje.soyisim;
	this->mail = obje.mail;
	this->kapasite = obje.kapasite;
	return *this;
}

Asistan::~Asistan()	{}

ostream& operator << (ostream& out, Asistan& obje)
{
	 out << " >	" << obje.isim <<  " ";
	 out << obje.soyisim << " ";
	 out << obje.mail << " ";
	 out << obje.kapasite;
	 return out;
}

void Asistan::asistanOlustur(string isim, string soyisim, string mail, int kapasite)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->mail = mail;
	this->kapasite = kapasite;
	this->isDolu = 1;
}

void Asistan::setIsim(string isim)			{	this->isim = isim;			}
void Asistan::setSoyisim(string soyisim)	{	this->soyisim = soyisim;	}
void Asistan::setMail(string mail)			{	this->mail = mail;			}
void Asistan::setKapasite(int kapasite)		{	this->kapasite = kapasite;	}
int Asistan::getKapasite()					{	return kapasite;			}
string Asistan::getSoyisim()				{	return soyisim;				}
string Asistan::getIsim()					{	return isim;				}
string Asistan::getMail()					{	return mail;				}
bool Asistan::getIsDolu()					{	return isDolu;				}