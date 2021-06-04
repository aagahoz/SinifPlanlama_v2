#include <iostream>
#include "library.h"

int main() 
{
	Ogrenci *ogrenciArray = dosyadanOgrenciOku();
	Asistan *asistanArray = dosyadanAsistanOku();
	Sinif *sinifArray = dosyadanSinifOku();
	
	ogrenciAsistanVeSinifSiraDuzenleme(asistanArray, sinifArray);

//	ogrenciInfo(ogrenciArray);
//	asistanInfo(asistanArray);
//	sinifInfo(sinifArray);

//	ogrenciEkle(ogrenciArray);
//	asistanEkle(asistanArray);
//	sinifEkle(sinifArray);

//	ogrenciCikar(ogrenciArray);
//	asistanCikar(asistanArray);
//	sinifCikar(sinifArray);

//	cout << ogrenciSayisi(ogrenciArray);
//	cout << asistanSayisi(asistanArray);
//	cout << sinifSayisi(sinifArray);
	
//	dosyaVeriGuncelleme(ogrenciArray, asistanArray, sinifArray);


//	enAzSayidaAsistanaAyirma(ogrenciArray, asistanArray);
//	asistanlaraEsitAyirma(ogrenciArray, asistanArray);

//	siniflaraEsitAyirma(ogrenciArray, sinifArray);
//	enAzSayidaSinifaAyirma(ogrenciArray, sinifArray);


//	asistanOgrenciListesiDosyalariniOlustur(ogrenciArra);
//	sinifOgrenciListesiDosyalariniOlustur(sinifArray);
	
	
	return 0;
}
