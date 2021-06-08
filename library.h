#ifndef library_H_
#define library_H_

#include <iostream>
#include <fstream>
#include "ogrenci.h"
#include "asistan.h"
#include "sinif.h"
using namespace std;

//merve -> main
//classlar -> enes

//merve
void genelMenu();
void listelemeMenu();
void dosyalamaMenu();
void eklemeMenu();
void asistanDagitimMenu();
void sinifDagitimMenu();
void ogrenciIsterlerMenu();
void veriTabaniSifirlamaMenu();
//merve
Ogrenci *dosyadanOgrenciOku();
Asistan *dosyadanAsistanOku();
Sinif *dosyadanSinifOku();
//enes
void ogrenciInfo(Ogrenci *ogrenciArray);
void asistanInfo(Asistan *asistanArray);
void sinifInfo(Sinif *sinifArray);
//merve
int ogrenciSayisi(Ogrenci *ogrenciArray);
int asistanSayisi(Asistan *asistanArray);
int sinifSayisi(Sinif *sinifArray);
//enes
void ogrenciEkle(Ogrenci *ogrenciArray);
void asistanEkle(Asistan *asistanArray);
void sinifEkle(Sinif *sinifArray);
//agah
void genelVeriDosyalariniGuncelle(Ogrenci *ogrenciArray, Asistan *asistanArray, Sinif *sinifArray, int islem);
void tumDosyaVeriGuncellemeVeOlusturma(Ogrenci *ogrenciArray, Asistan *asistanArray, Sinif *sinifArray, Ogrenci *ogrenciArrayCaliskan, Ogrenci *ogrenciArrayTembel, Ogrenci *ogrenciArrayIlkDefaAlanlar, Ogrenci *ogrenciArrayAlttanAlanlar, int islem);
void veritabaniniSifirla(Ogrenci **ogrenciArray, Asistan **asistanArray, Sinif **sinifArray, Ogrenci *ogrenciArrayCaliskan, Ogrenci *ogrenciArrayTembel, Ogrenci *ogrenciArrayIlkDefaAlanlar, Ogrenci *ogrenciArrayAlttanAlanlar, int islem);
void asistanOgrenciListesiDosyalariniOlustur(Asistan *asistanArray);
void sinifOgrenciListesiDosyalariniOlustur(Sinif *sinifArray);
void ogrenciListesiniDosyayaYaz(string dosyaAdi, Ogrenci* ogrenciArray);
//merve
void asistanOgrenciListesiYazdir(Asistan *asistanArray);
void sinifOgrenciListesiYazdir(Sinif *sinifArray);
//agah
void ogrenciAsistanVeSinifSiraDuzenleme(Asistan *asistanArray, Sinif *sinifArray, int islem);
void asistanlaraEsitAyirma(Ogrenci *ogrenciArray, Asistan *asistanArray);
void enAzSayidaAsistanaAyirma(Ogrenci *ogrenciArray, Asistan *asistanArray);
void siniflaraEsitAyirma(Ogrenci *ogrenciArray, Sinif *sinifArray);
void enAzSayidaSinifaAyirma(Ogrenci *ogrenciArray, Sinif *sinifArray);
void caliskanTembelArrayleriniDoldur(Ogrenci *ogrenciArray, Ogrenci *ogrenciArrayCaliskan, Ogrenci *ogrenciArrayTembel);
void alttanAlanIlkAlanArrayleriniDoldur(Ogrenci *ogrenciArray, Ogrenci *ogrenciArrayIlkDefaAlanlar, Ogrenci *ogrenciArrayAlttanAlanlar);

#endif