#include "library.h"
#include "ogrenci.h"
#include "asistan.h"
#include "sinif.h"

Ogrenci *dosyadanOgrenciOku()
{
	string tempIsim;
	string tempSoyisim;
	string tempHarfNotu;
	int tempNumara;
	int tempDurum;
	
	static Ogrenci *ogrenciArray = NULL;
	ogrenciArray = new Ogrenci[200];
	
	ifstream myfile("ogrenci.txt");
	if(myfile.is_open())
	{
		int i = 0;
		while(!myfile.eof())
		{
			myfile >> tempNumara >> tempIsim >> tempSoyisim >> tempDurum >> tempHarfNotu;
			ogrenciArray[i].ogrenciOlustur(tempNumara, tempIsim, tempSoyisim, tempDurum, tempHarfNotu);
			i++;
		}
		
	}
	return ogrenciArray;
}

void ogrenciInfo(Ogrenci *ogrenciArray)
{
	for(int i = 0; ogrenciArray[i].getIsDolu() == true; i++)
	{
		cout << ogrenciArray[i] << endl;
	}
}

int ogrenciSayisi(Ogrenci *ogrenciArray)
{
	int x = 0;
	for (int i = 0; ogrenciArray[i].getIsDolu() == true; i++)	{	x++;	}
	return x;
}

void ogrenciEkle(Ogrenci *ogrenciArray)
{
	string tempIsim;
	string tempSoyisim;
	string tempHarfNotu;
	int tempNumara;
	int tempDurum;

	cout << "Numara > "; cin >> tempNumara;
	cout << "Isim > "; cin >> tempIsim;
	cout << "Soyisim > "; cin >> tempSoyisim;
	cout << "Durum > "; cin >> tempDurum;
	cout << "Harf Notu > "; cin >> tempHarfNotu;
	
	ogrenciArray[ogrenciSayisi(ogrenciArray)].ogrenciOlustur(tempNumara, tempIsim, tempSoyisim, tempDurum, tempHarfNotu);
}

void ogrenciCikar(Ogrenci *ogrenciArray)
{
	
}


Asistan *dosyadanAsistanOku()
{
	string tempIsim;
	string tempSoyisim;
	string tempMail;
	int tempKapasite;
	
	static Asistan *asistanArray = NULL;
	asistanArray = new Asistan[10];
	
	ifstream myfile("asistan.txt");
	if(myfile.is_open())
	{
		int i = 0;
		while(!myfile.eof())
		{
			myfile >> tempIsim >> tempSoyisim >> tempMail >> tempKapasite;
			asistanArray[i].asistanOlustur(tempIsim, tempSoyisim, tempMail, tempKapasite);
			i++;
		}
	}
	return asistanArray;
}

void asistanInfo(Asistan *asistanArray)
{
	for(int i = 0; asistanArray[i].getIsDolu() == true; i++)
	{
		cout << asistanArray[i] << endl;
	}
}

int asistanSayisi(Asistan *asistanArray)
{
	int x = 0;
	for (int i = 0; asistanArray[i].getIsDolu() == true; i++)	{	x++;	}
	return x;
}

void asistanEkle(Asistan *asistanArray)
{
	string tempIsim;
	string tempSoyisim;
	string tempMail;
	int tempKapasite;
	
	cout << "Isim > "; cin >> tempIsim;
	cout << "Soyisim > "; cin >> tempSoyisim;
	cout << "Mail > "; cin >> tempMail;
	cout << "Kapasite > "; cin >> tempKapasite;
	asistanArray[asistanSayisi(asistanArray)].asistanOlustur(tempIsim, tempSoyisim, tempMail, tempKapasite);
}

void asistanCikar(Asistan *asistanArray)
{
	
}



Sinif *dosyadanSinifOku()
{
	string tempSinifAdi;
	string tempSinifYeri;
	int tempSinifKapasite;
	
	static Sinif *sinifArray = NULL;
	sinifArray = new Sinif[15];
	bool islemBasarili = false;
	
	ifstream myfile("sinif.txt");
	if(myfile.is_open())
	{
		int i = 0;
		while(!myfile.eof())
		{
			myfile >> tempSinifAdi >> tempSinifYeri >> tempSinifKapasite;
			sinifArray[i].sinifOlustur(tempSinifAdi, tempSinifYeri, tempSinifKapasite);
			i++;
		}
		islemBasarili = 1;
	}
	return sinifArray;
}

void sinifInfo(Sinif *sinifArray)
{
	for(int i = 0; sinifArray[i].getIsDolu() == true; i++)
	{
		cout << sinifArray[i] << endl;
	}
}

int sinifSayisi(Sinif *sinifArray)
{
	int x = 0;
	for (int i = 0; sinifArray[i].getIsDolu() == true; i++)	{	x++;	}
	return x;
}

void sinifEkle(Sinif *sinifArray)
{
	string tempSinifAdi;
	string tempSinifYeri;
	int tempKapasite;
	cout << "Sinif Adi > "; cin >> tempSinifAdi;
	cout << "Sinif Yeri > "; cin >> tempSinifYeri;
	cout << "Kapasite > "; cin >> tempKapasite;
	sinifArray[sinifSayisi(sinifArray)].sinifOlustur(tempSinifAdi, tempSinifYeri, tempKapasite);
}

void sinifCikar(Sinif *sinifArray)
{
	
}


void dosyaVeriGuncelleme(Ogrenci *ogrenciArray, Asistan *asistanArray, Sinif *sinifArray)
{
	
	ofstream myfile1("ogrenci.txt");
	if(myfile1.is_open())
	{
		int i=0;
		while(ogrenciArray[i+1].getIsDolu())
		{
			myfile1 << ogrenciArray[i].getNumara() << " " << ogrenciArray[i].getIsim() << " " << ogrenciArray[i].getSoyisim() << " " << ogrenciArray[i].getDurum() << " " << ogrenciArray[i].getHarfnotu() << endl;
			i++;
		}
		myfile1 << ogrenciArray[i].getNumara() << " " << ogrenciArray[i].getIsim() << " " << ogrenciArray[i].getSoyisim() << " " << ogrenciArray[i].getDurum() << " " << ogrenciArray[i].getHarfnotu();
	}
	
	ofstream myfile2("asistan.txt");
	if(myfile2.is_open())
	{
		int i=0;
		while(asistanArray[i+1].getIsDolu())
		{
			myfile2 << asistanArray[i].getIsim() << " " << asistanArray[i].getSoyisim() << " " << asistanArray[i].getMail() << " " << asistanArray[i].getKapasite() << endl;
			i++;
		}
		myfile2 << asistanArray[i].getIsim() << " " << asistanArray[i].getSoyisim() << " " << asistanArray[i].getMail() << " " << asistanArray[i].getKapasite();
	}
	
	ofstream myfile3("sinif.txt");
	if(myfile3.is_open())
	{
		int i=0;
		while(sinifArray[i+1].getIsDolu())
		{
			myfile3 << sinifArray[i].getSinifAdi() << " " << sinifArray[i].getSinifYeri() << " " << sinifArray[i].getKapasite() << endl;
			i++;
		}
		myfile3 << sinifArray[i].getSinifAdi() << " " << sinifArray[i].getSinifYeri() << " " << sinifArray[i].getKapasite();
	}
}





void asistanlaraEsitAyirma(Ogrenci *ogrenciArray, Asistan *asistanArray)
{
	int ogrSayisi = ogrenciSayisi(ogrenciArray);
	int asistSayisi = asistanSayisi(asistanArray);
	int asistanKapasiteleri[asistSayisi];
	
	int artikOgrenci = ogrSayisi % asistSayisi;
		
	for(int i=0; i < asistSayisi; i++)
	{
		asistanKapasiteleri[i] = ogrSayisi / asistSayisi;
	}
	for(int i=0; i < artikOgrenci; i++)
	{
		asistanKapasiteleri[i]++;
	}
	
	int ogrenciIndex=0, asistanIndex = 0;
	while(ogrenciIndex <= ogrSayisi)
	{
		for(int i=0; i <= asistanKapasiteleri[asistanIndex]; i++)
		{
			asistanArray[asistanIndex].ogrenciListesi[i] = ogrenciArray[ogrenciIndex];
			ogrenciIndex++;
		}
		asistanIndex++;
	}
	
}

void enAzSayidaAsistanaAyirma(Ogrenci *ogrenciArray, Asistan *asistanArray)
{	
	int ogrSayisi = ogrenciSayisi(ogrenciArray);
	
	int ogrenciIndex=0, asistanIndex = 0;
	while(ogrenciIndex <= ogrSayisi)
	{
		for(int i=0; i <= asistanArray[asistanIndex].getKapasite(); i++)
		{
			asistanArray[asistanIndex].ogrenciListesi[i] = ogrenciArray[ogrenciIndex];
			ogrenciIndex++;
		}
		asistanIndex++;
	}
}

void siniflaraEsitAyirma(Ogrenci *ogrenciArray, Sinif *sinifArray)
{
	int ogrSayisi = ogrenciSayisi(ogrenciArray);
	int sinSayisi = sinifSayisi(sinifArray);
	int sinifKapasiteleri[sinSayisi];
	
	int artikOgrenci = ogrSayisi % sinSayisi;
		
	for(int i=0; i < sinSayisi; i++)
	{
		sinifKapasiteleri[i] = ogrSayisi / sinSayisi;
	}
	for(int i=0; i < artikOgrenci; i++)
	{
		sinifKapasiteleri[i]++;
	}
	
	int ogrenciIndex=0, sinifIndex = 0;
	while(ogrenciIndex <= ogrSayisi)
	{
		for(int i=0; i <= sinifKapasiteleri[sinifIndex]; i++)
		{
			sinifArray[sinifIndex].ogrenciListesi[i] = ogrenciArray[ogrenciIndex];
			ogrenciIndex++;
		}
		sinifIndex++;
	}

}

void enAzSayidaSinifaAyirma(Ogrenci *ogrenciArray, Sinif *sinifArray)
{
	int ogrSayisi = ogrenciSayisi(ogrenciArray);
	
	int ogrenciIndex=0, sinifIndex = 0;
	while(ogrenciIndex <= ogrSayisi)
	{
		for(int i=0; i <= sinifArray[sinifIndex].getKapasite(); i++)
		{
			sinifArray[sinifIndex].ogrenciListesi[i] = ogrenciArray[ogrenciIndex];
			ogrenciIndex++;
		}
		sinifIndex++;
	}
}


void asistanOgrenciListesiDosyalariniOlustur(Asistan *asistanArray)
{
	int asistSayisi = asistanSayisi(asistanArray);
	
	for(int i=0; i < asistSayisi; i++)
	{
		ogrenciListesiniDosyayaYaz(asistanArray[i].getIsim() + " "+ asistanArray[i].getSoyisim(), asistanArray[i].ogrenciListesi);
	}
}

void sinifOgrenciListesiDosyalariniOlustur(Sinif *sinifArray)
{
	int sinSayisi = sinifSayisi(sinifArray);
	
	for(int i=0; i < sinSayisi; i++)
	{
		ogrenciListesiniDosyayaYaz(sinifArray[i].getSinifAdi()+ " "+ sinifArray[i].getSinifYeri(), sinifArray[i].ogrenciListesi);
	}
}

void ogrenciListesiniDosyayaYaz(string dosyaAdi, Ogrenci* ogrenciArray)
{
	dosyaAdi = "newFiles/" + dosyaAdi + ".txt";
	ofstream myfile(dosyaAdi);
	if(myfile.is_open())
	{
		int i=0;
		while(ogrenciArray[i+1].getIsDolu())
		{
			myfile << ogrenciArray[i].getNumara() << " " << ogrenciArray[i].getIsim() << " " << ogrenciArray[i].getSoyisim() << " " << ogrenciArray[i].getDurum() << " " << ogrenciArray[i].getHarfnotu() << endl;
			i++;
		}
		myfile << ogrenciArray[i].getNumara() << " " << ogrenciArray[i].getIsim() << " " << ogrenciArray[i].getSoyisim() << " " << ogrenciArray[i].getDurum() << " " << ogrenciArray[i].getHarfnotu();
	}
}


void ogrenciAsistanVeSinifSiraDuzenleme(Asistan *asistanArray, Sinif *sinifArray)
{
	int asistSayisi = asistanSayisi(asistanArray);
	
	string tempIsim;
	string tempSoyisim;
	string tempMail;
	int tempKapasite;
	
	for(int i=0; i < asistSayisi; i++)
	{
		for(int j=0; j < asistSayisi; j++)
		{
			if(asistanArray[i].getKapasite() >= asistanArray[j].getKapasite())
			{
				tempIsim = asistanArray[i].getIsim();
				asistanArray[i].setIsim(asistanArray[j].getIsim());
				asistanArray[j].setIsim(tempIsim);
				
				tempSoyisim = asistanArray[i].getSoyisim();
				asistanArray[i].setSoyisim(asistanArray[j].getSoyisim());
				asistanArray[j].setSoyisim(tempSoyisim);
				
				tempMail = asistanArray[i].getMail();
				asistanArray[i].setMail(asistanArray[j].getMail());
				asistanArray[j].setMail(tempMail);
				
				tempKapasite = asistanArray[i].getKapasite();
				asistanArray[i].setKapasite(asistanArray[j].getKapasite());
				asistanArray[j].setKapasite(tempKapasite);		
			}
		}
	}
	
	int sinifSayi = sinifSayisi(sinifArray);
	
	string tempSinifAdi;
	string tempSinifYeri;
//	int tempKapasite;
	
	for(int i=0; i < sinifSayi; i++)
	{
		for(int j=0; j < sinifSayi; j++)
		{
			if(sinifArray[i].getKapasite() >= sinifArray[j].getKapasite())
			{
				tempSinifAdi = sinifArray[i].getSinifAdi();
				sinifArray[i].setSinifAdi(sinifArray[j].getSinifAdi());
				sinifArray[j].setSinifAdi(tempSinifAdi);
				
				tempSinifYeri = sinifArray[i].getSinifYeri();
				sinifArray[i].setSinifYeri(sinifArray[j].getSinifYeri());
				sinifArray[j].setSinifYeri(tempSinifYeri);
				
				tempKapasite = sinifArray[i].getKapasite();
				sinifArray[i].setSinifKapasite(sinifArray[j].getKapasite());
				sinifArray[j].setSinifKapasite(tempKapasite);		
			}
		}
	}
}




