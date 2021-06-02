#ifndef library_H_
#define library_H_

#include <iostream>
#include "ogrenci.h"
#include "asistan.h"
#include "sinif.h"
using namespace std;

void DosyadanOku(string dosyaAdi);
void OgrenciInfo();//parametreleri gözden geçir
void AsistanInfo();
void SinifInfo();
void OgrenciEkle();
void AsistanEkle();
void SinifEkle();
void OgrenciCikar();
void AsistanCikar();
void SinifCikar();
void AsitanlaraGoreAyirma();
void AsistanlarEsitAyirma();
void EnAzSayidaAsistanaAyirma();
void VeriGuncelleme();
void SiniflaraAyirma();
void SiniflaraEsitAyirma();
void EnAzSayidaSinifaAyirma();


#endif
