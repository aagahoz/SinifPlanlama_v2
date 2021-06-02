#include "ogrenci.h"

Ogrenci::Ogrenci()
{
		isim = "null";
		soyisim = "null";
		harfNotu = "null";
		durum = 0;
		numara = 0;
		notSayisi = 0;
		notlar = NULL;
}
Ogrenci::Ogrenci(string isim, string soyisim, string harfNotu, int durum, int numara, int notSayisi)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->harfNotu = harfNotu;
	this->durum = durum;
	this->numara = numara;
	this->notSayisi = notSayisi;
	this->notlar = notlar;
}
Ogrenci::Ogrenci(const Ogrenci& ogr)
{
	this->isim = ogr.isim;
	this->soyisim = ogr.soyisim;
	this->harfNotu = ogr.harfNotu;
	this->durum = ogr.durum;
	this->numara = ogr.numara;
	this->notSayisi = ogr.notSayisi;
	this->notlar = ogr.notlar;
}
Ogrenci& Ogrenci::operator=(const Ogrenci& ogr)
{
	this->isim = ogr.isim;
	this->soyisim = ogr.soyisim;
	this->harfNotu = ogr.harfNotu;
	this->durum = ogr.durum;
	this->numara = ogr.numara;
	this->notSayisi = ogr.notSayisi;
	this->notlar = ogr.notlar;
	return *this;
}
//~Ogrenci();
		
void Ogrenci::OgrOlustur(string isim, string soyisim, string harfNotu, int durum, int numara, int notSayisi)
{
	this->isim = isim;
	this->soyisim = soyisim;
	this->harfNotu = harfNotu;
	this->durum = durum;
	this->numara = numara;
	this->notSayisi = notSayisi;
	this->notlar = notlar;
}
//Ogrenci& OgrDuzenle();
		
//int HarfnotuHesapla();
//string harfnotuCevirici();
ostream& operator << (ostream& out, Ogrenci& obje)
{
	out << "Isim >		" << obje.isim << endl;
	out << "Soyisim >	" << obje.soyisim << endl;
	out << "Numara >	" << obje.numara << endl;
	out << "Durum >		" << obje.durum << endl;
	out << "Harf Notu >	" << obje.harfNotu << endl;
	return out;
}

//void setIsim(string isim);
//void setSoyisim(string soyisim);
//void setHarfnotu(int harfnotu);
//void setDurum(int durum);
//void setNumara(int numara);
//void setNotsayisi(int notSayisi);
//string getIsim();
//string getSoyisim();
//int getHarfnotu(int harfnotu);
//int getDurum(int durum);
//int getNumara(int numara);
//int getNotsayisi(int notSayisi);