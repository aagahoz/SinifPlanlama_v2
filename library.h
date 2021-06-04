#ifndef library_H_
#define library_H_

#include <iostream>
#include <fstream>
#include "ogrenci.h"
#include "asistan.h"
#include "sinif.h"
using namespace std;

Ogrenci *dosyadanOgrenciOku();
Asistan *dosyadanAsistanOku();
Sinif *dosyadanSinifOku();

void ogrenciInfo(Ogrenci *ogrenciArray);
void asistanInfo(Asistan *asistanArray);
void sinifInfo(Sinif *sinifArray);

int ogrenciSayisi(Ogrenci *ogrenciArray);
int asistanSayisi(Asistan *asistanArray);
int sinifSayisi(Sinif *sinifArray);

void ogrenciEkle(Ogrenci *ogrenciArray);
void asistanEkle(Asistan *asistanArray);
void sinifEkle(Sinif *sinifArray);

//void ogrenciCikar(Ogrenci *ogrenciArray);
//void asistanCikar(Asistan *asistanArray);
//void sinifCikar(Sinif *sinifArray);

void asistanlaraEsitAyirma(Ogrenci *ogrenciArray, Asistan *asistanArray);
void enAzSayidaAsistanaAyirma(Ogrenci *ogrenciArray, Asistan *asistanArray);
void siniflaraEsitAyirma(Ogrenci *ogrenciArray, Sinif *sinifArray);
void enAzSayidaSinifaAyirma(Ogrenci *ogrenciArray, Sinif *sinifArray);

void dosyaVeriGuncelleme(Ogrenci *ogrenciArray, Asistan *asistanArray, Sinif *sinifArray);
void ogrenciAsistanVeSinifSiraDuzenleme(Asistan *asistanArray, Sinif *sinifArray);

void asistanOgrenciListesiDosyalariniOlustur(Asistan *asistanArray);
void sinifOgrenciListesiDosyalariniOlustur(Sinif *sinifArray);
void ogrenciListesiniDosyayaYaz(string dosyaAdi, Ogrenci* ogrenciArray);

#endif
