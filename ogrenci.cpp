#include "ogrenci.h"

Ogrenci::Ogrenci()
{
		isim = "null";
		soyisim = "null";
		harfNotu = "null";
		durum = 0;
		numara = 0;
		isDolu = false;
}
Ogrenci::Ogrenci(string isim, string soyisim, string harfNotu, int durum, int numara, int notSayisi)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->harfNotu = harfNotu;
	this->durum = durum;
	this->numara = numara;
	this->isDolu = true;
}
Ogrenci::Ogrenci(const Ogrenci& ogr)
{
	this->isim = ogr.isim;
	this->soyisim = ogr.soyisim;
	this->harfNotu = ogr.harfNotu;
	this->durum = ogr.durum;
	this->numara = ogr.numara;
	this->isDolu = true;
}
Ogrenci& Ogrenci::operator=(const Ogrenci& ogr)
{
	this->isim = ogr.isim;
	this->soyisim = ogr.soyisim;
	this->harfNotu = ogr.harfNotu;
	this->durum = ogr.durum;
	this->numara = ogr.numara;
	this->isDolu = true;
	return *this;
}
//~Ogrenci();
	
	
void Ogrenci::ogrenciOlustur(int numara, string isim, string soyisim, int durum, string harfNotu)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->harfNotu = harfNotu;
	this->durum = durum;
	this->numara = numara;
	this->isDolu = true;
}
void Ogrenci::ogrenciDuzenle()
{
	
}
		
ostream& operator << (ostream& out, Ogrenci& obje)
{
	out << "Numara >	" << obje.numara << endl;
	out << "Isim >		" << obje.isim << endl;
	out << "Soyisim >	" << obje.soyisim << endl;
	out << "Durum >		" << obje.durum << endl;
	out << "Harf Notu >	" << obje.harfNotu << endl << endl;
	return out;
}


void Ogrenci::setNumara(int numara)					{	this->numara = numara;		}
void Ogrenci::setIsim(string isim)					{	this->isim = isim;			}
void Ogrenci::setSoyisim(string soyisim)			{	this->soyisim = soyisim;	}	
void Ogrenci::setDurum(int durum)					{	this->durum = durum;		}
void Ogrenci::setHarfnotu(string harfNotu)			{	this->harfNotu = harfNotu;	}

int Ogrenci::getNumara()			{	return numara;		}
string Ogrenci::getIsim()			{	return isim;		}
string Ogrenci::getSoyisim()		{	return soyisim;		}
int Ogrenci::getDurum()				{	return durum;		}
string Ogrenci::getHarfnotu()		{	return harfNotu;	}
bool Ogrenci::getIsDolu()			{	return isDolu;		}


