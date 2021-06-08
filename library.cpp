#include "library.h"
#include "ogrenci.h"
#include "asistan.h"
#include "sinif.h"

void genelMenu()
{
	system("pause");
	system("cls");
	cout << endl << endl << endl;
	int i=0;
	cout << " > Cikmak icin--------------------------------------------" << i << endl << endl;					i++;
	cout << " > Listeleri ekrana basmak icin-----------------------------" << i << endl; 						i++;
	cout << " > Listeleri dosyaya yazdirmak icin---------------------------" << i << endl << endl;				i++;

	cout << " > Ogrenci-Asistan-Sinif ekleme islemleri icin-------------" << i << endl << endl;					i++;
		
	cout << " > Asistanlari ogrencilere dagitim islemleri icin---------------------" << i << endl;				i++;
	cout << " > Siniflari ogrencilere dagitim islemleri icin-------------------------" << i << endl;			i++;
	cout << " > Ogrencileri isterlere gore listelemek icin-----------------------------" << i << endl << endl;	i++;
	
	cout << " > Veritabanini dosyadan sifirlamak icin------------------------------------" << i << endl << endl;i++;

	cout << "	Giriniz [0:7] > ";
}

void listelemeMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin-----------------------------" << i << endl << endl; 				i++;

	cout << " >> Genel Ogrenci Listeleme---------------------" << i << endl; 					i++;	
	cout << " >> Genel Asistan Listeleme-----------------------" << i << endl;					i++;		
	cout << " >> Genel Sinif Listeleme---------------------------" << i << endl << endl;		i++;

	cout << " >> Asistanlarin ogrencilerini Listeleme--------------" << i << endl;				i++;
	cout << " >> Siniflarin ogrencilerini Listeleme------------------" << i << endl;			i++;

	cout << " >> Caliskan ogrencileri Listeleme---------------------" << i << endl;			i++;
	cout << " >> Tembel ogrencileri Listeleme-------------------------" << i << endl;			i++;

	cout << " >> Alttan alan-Ilk defa alan ogrencileri Listeleme--------" << i << endl << endl;i++;
	cout << " >> Alttan alan-Ilk defa alan ogrencileri Listeleme----------" << i << endl << endl;i++;

	cout << "	Giriniz [0:9] >> ";
}

void dosyalamaMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin------------------------------------------------" << i << endl << endl; 					i++;
	
	cout << " >> Genel Ogrenci listesini dosyaya yazdirma-----------------------" << i << endl; 						i++;	
	cout << " >> Genel Asistan listesini dosyaya yazdirma-------------------------" << i << endl;						i++;		
	cout << " >> Genel Sinif listesini dosyaya yazdirma------------------------------" << i << endl << endl;			i++;

	cout << " >> Asistanlarin ogrencileri  listesini dosyaya yazdirma------------------" << i << endl;					i++;
	cout << " >> Siniflarin ogrencileri  listesini dosyaya yazdirma----------------------" << i << endl << endl;		i++;

	cout << " >> Zeki-Tembel ogrencileri  listesini dosyaya yazdirma-----------------------" << i << endl;				i++;
	cout << " >> Alttan alan-Ilk defa alan ogrencileri  listesini dosyaya yazdirma-----------" << i << endl;			i++;

	cout << " >> Hepsini yap-------------------------------------------------------------------"<< i << endl << endl; 	i++;

	cout << "	Giriniz [0:8] >> ";
}

void eklemeMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin------------------------------------------------" << i << endl << endl; 			i++;

	cout << " >> Ogrenci listesine ekleme---------------------------------------" << i << endl; 				i++;	
	cout << " >> Asistan listesine ekleme-----------------------------------------" << i << endl; 				i++;	
	cout << " >> Sinif listesine ekleme---------------------------------------------" << i << endl; 			i++;	

	cout << "	Giriniz [0:3] >> ";
}

void asistanDagitimMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin--------------------------------------------" << i << endl << endl; 			i++;
	
	cout << " >> Ogrencileri Asistanlara esit dagitmak icin-----------------" << i << endl; 				i++;
	cout << " >> En az sayida Asistana ogrencileri dagitmak icin--------------" << i << endl << endl; 		i++;

	cout << "	Giriniz [0:2] >> ";
}

void sinifDagitimMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin -----------------------------------------" << i << endl << endl; 			i++;

	cout << " >> Ogrencileri Siniflara esit dagitmak icin-----------------" << i << endl; 					i++;
	cout << " >> En az sayida Siniflara ogrencileri dagitmak icin-----------" << i << endl << endl; 		i++;

	cout << "	Giriniz [0:2] >> ";
}

void ogrenciIsterlerMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin------------------------------------------------------" << i << endl << endl; 			i++;

	cout << " >> Ogrencileri Caliskan-Tembel olarak ayirmak icin----------------------" << i << endl; 					i++;
	cout << " >> Ogrencileri dersi Ilk defa-Alttan alan olarak ayirmak icin-------------" << i << endl; 				i++;
	
	cout << " >> Hepsini yap--------------------------------------------------------------"<< i << endl << endl; 		i++;
	
	cout << "	Giriniz [0:3] >> ";
}

void veriTabaniSifirlamaMenu()
{
	system("cls");
	cout << endl << endl << endl;
	int i = 0;
	cout << " >> Ust menu icin-----------------------------------------" << i << endl << endl; 	i++;

	cout << " >> Genel Ogrenci Listesini Sifirla-------------------------" << i << endl; 			i++;
	cout << " >> Genel Asistan ve Sinif Listesini Sifirla------------------" << i << endl; 			i++;
	cout << " >> Genel Sinif Listesini Sifirla-------------------------------" << i << endl << endl;		i++;
	
	cout << " >> Caliskan-Tembel ogrenci listesini bosalt----------------------" << i << endl; 			i++;
	cout << " >> Alttan alan-Ilk defa alan ogrenci listesini bosalt--------------" << i << endl << endl;	i++;
	
	cout << " >> Hepsini yap-------------------------------------------------------" << i << endl << endl; 	i++;
	
	cout << "	Giriniz [0:5] >> ";
}

void menuEski()
{
	system("pause");
	system("cls");
	cout << endl << endl << endl;
	int i=0;
	cout << " > Cikmak icin---------------------------------------" << i << endl << endl; i++;
	
	cout << " > Ogrenci listesini yazdirmak icin-- ----------------" << i << endl; i++;
	cout << " > Asistan listesini yazdirmak icin--------------------" << i << endl; i++;
	cout << " > Sinif listesini yazdirmak icin-----------------------" << i << endl << endl; i++;
		
	cout << " > Ogrenci eklemek icin----------------------------------" << i << endl; i++;
	cout << " > Asistan eklemek icin-----------------------------------" << i << endl; i++;
	cout << " > Sinif eklemek icin--------------------------------------" << i << endl << endl; i++;
		
	cout << " > Ogrenci cikarmak icin------------------------------------" << i << endl; i++;
	cout << " > Asistan cikarmak icin-------------------------------------" << i << endl; i++;
	cout << " > Sinif cikarmak icin----------------------------------------" << i << endl << endl; i++;

	cout << " > Ogrenci duzenlemek icin-------------------------------------" << i << endl; i++;
	cout << " > Asistan duzenlemek icin--------------------------------------" << i << endl; i++;
	cout << " > Sinif duzenlemek icin-----------------------------------------" << i << endl << endl; i++;
	
	cout << " > Ogrencileri Asistanlara esit dagitmak icin---------------------" << i << endl; i++;
	cout << " > En az sayida Asistana ogrencileri dagitmak icin-----------------" << i << endl << endl; i++;
		
	cout << " > Ogrencileri Siniflara esit dagitmak icin-------------------------" << i << endl; i++; 
	cout << " > En az sayida Sinifa ogrencileri dagitmak icin---------------------" << i << endl << endl; i++;
	
	cout << " > Ogrencileri Caliskan-Tembel olarak ayirmak icin--------------------" << i << endl; i++;
	cout << " > Ogrencileri dersi Ilk defa-Alttan alan olarak ayirmak icin----------" << i << endl << endl; i++;
		
	cout << " > Listeleri dosyaya yazmak icin----------------------------------------" << i << endl; i++;
	cout << " > Veritabanini sifirlamak icin------------------------------------------" << i << endl << endl; i++;
	
	cout << "	Giriniz [0:19] >> ";
}

/////////////////////////////////////////////////////////////////////////////

Ogrenci *dosyadanOgrenciOku()
{
	string tempIsim;
	string tempSoyisim;
	string tempHarfNotu;
	int tempNumara;
	int tempDurum;
	
	static Ogrenci *ogrenciArray = NULL;
	ogrenciArray = new Ogrenci[200];
	
	ifstream myfile("dataBase/ogrenci.txt");
	if(myfile.is_open())
	{
		int i = 0;
		while(!myfile.eof())
		{
			myfile >> tempNumara >> tempIsim >> tempSoyisim >> tempDurum >> tempHarfNotu;
			ogrenciArray[i].ogrenciOlustur(tempNumara, tempIsim, tempSoyisim, tempDurum, tempHarfNotu);
			i++;
		}
		myfile.close();
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

/////////////////////////////////////////////////////////////////////////////

Asistan *dosyadanAsistanOku()
{
	string tempIsim;
	string tempSoyisim;
	string tempMail;
	int tempKapasite;
	
	static Asistan *asistanArray = NULL;
	asistanArray = new Asistan[10];
	
	ifstream myfile("dataBase/asistan.txt");
	if(myfile.is_open())
	{
		int i = 0;
		while(!myfile.eof())
		{
			myfile >> tempIsim >> tempSoyisim >> tempMail >> tempKapasite;
			asistanArray[i].asistanOlustur(tempIsim, tempSoyisim, tempMail, tempKapasite);
			i++;
		}
		myfile.close();
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

/////////////////////////////////////////////////////////////////////////////

Sinif *dosyadanSinifOku()
{
	string tempSinifAdi;
	string tempSinifYeri;
	int tempSinifKapasite;
	
	static Sinif *sinifArray = NULL;
	sinifArray = new Sinif[15];
	
	ifstream myfile("dataBase/sinif.txt");
	if(myfile.is_open())
	{
		int i = 0;
		while(!myfile.eof())
		{
			myfile >> tempSinifAdi >> tempSinifYeri >> tempSinifKapasite;
			sinifArray[i].sinifOlustur(tempSinifAdi, tempSinifYeri, tempSinifKapasite);
			i++;
		}
		myfile.close();
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

/////////////////////////////////////////////////////////////////////////////

void asistanOgrenciListesiYazdir(Asistan *asistanArray)
{
	int asistSayisi = asistanSayisi(asistanArray);
	
	for(int i=0; i < asistSayisi; i++)
	{
		cout << endl;
		cout << " >>>>>	" << asistanArray[i].getIsim() <<  " ";
		cout << asistanArray[i].getSoyisim() << " ";
		cout << asistanArray[i].getMail() << " ";
		cout << asistanArray[i].getKapasite() << endl;
		ogrenciInfo(asistanArray[i].ogrenciListesi);
	}
}

void sinifOgrenciListesiYazdir(Sinif *sinifArray)
{
	int sinSayisi = sinifSayisi(sinifArray);
	
	for(int i=0; i < sinSayisi; i++)
	{
		ogrenciInfo(sinifArray[i].ogrenciListesi);
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
	if(ogrenciArray[0].getIsDolu())
	{
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
		myfile.close();
	}
}

void genelVeriDosyalariniGuncelle(Ogrenci *ogrenciArray, Asistan *asistanArray, Sinif *sinifArray, int islem)
{
	if(islem == 1 || islem == 8)
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
		myfile1.close();
	}
	if(islem == 2 || islem == 8)
	{
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
		myfile2.close();
	}
	
	if(islem == 3 || islem == 8)
	{
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
		myfile3.close();
	}
}

void tumDosyaVeriGuncellemeVeOlusturma(Ogrenci *ogrenciArray, Asistan *asistanArray, Sinif *sinifArray, Ogrenci *ogrenciArrayCaliskan, Ogrenci *ogrenciArrayTembel, Ogrenci *ogrenciArrayIlkDefaAlanlar, Ogrenci *ogrenciArrayAlttanAlanlar, int islem)
{
	genelVeriDosyalariniGuncelle(ogrenciArray, asistanArray, sinifArray, islem);

	if(islem == 4 || islem == 8)
	{
		asistanOgrenciListesiDosyalariniOlustur(asistanArray);
	}
	if(islem == 5 || islem == 8)
	{
		sinifOgrenciListesiDosyalariniOlustur(sinifArray);
	}
	
	if(islem == 6 || islem == 8)
	{
		ogrenciListesiniDosyayaYaz("Caliskan Ogrenciler", ogrenciArrayCaliskan);
		ogrenciListesiniDosyayaYaz("Tembel Ogrenciler", ogrenciArrayTembel);
	}	
	if(islem == 7 || islem == 8)
	{
		ogrenciListesiniDosyayaYaz("Ilk defa alan Ogrenciler", ogrenciArrayIlkDefaAlanlar);
		ogrenciListesiniDosyayaYaz("Alttan alan Ogrenciler", ogrenciArrayAlttanAlanlar);
	}	
}

void veritabaniniSifirla(Ogrenci **ogrenciArray, Asistan **asistanArray, Sinif **sinifArray, Ogrenci *ogrenciArrayCaliskan, Ogrenci *ogrenciArrayTembel, Ogrenci *ogrenciArrayIlkDefaAlanlar, Ogrenci *ogrenciArrayAlttanAlanlar, int islem)
{
	if(islem == 1 || islem == 5)
	{
		*ogrenciArray = dosyadanOgrenciOku();
	}
	if(islem == 2 || islem == 5)
	{
		*asistanArray = dosyadanAsistanOku();
		*sinifArray = dosyadanSinifOku();
		ogrenciAsistanVeSinifSiraDuzenleme(*asistanArray, *sinifArray, islem);
	}
	
	if(islem == 4 || islem == 5)
	{
		for(int i=0; ogrenciArrayCaliskan[i].getIsDolu() == true; i++)
		{
			ogrenciArrayCaliskan[i].objeBosalt();
		}
		
		for(int i=0; ogrenciArrayTembel[i].getIsDolu() == true; i++)
		{
			ogrenciArrayTembel[i].objeBosalt();
		}
	}
	
	if(islem == 5 || islem == 5)
	{
		for(int i=0; ogrenciArrayIlkDefaAlanlar[i].getIsDolu() == true; i++)
		{
			ogrenciArrayIlkDefaAlanlar[i].objeBosalt();
		}
		
		for(int i=0; ogrenciArrayAlttanAlanlar[i].getIsDolu() == true; i++)
		{
			ogrenciArrayAlttanAlanlar[i].objeBosalt();
		}
	}
}

/////////////////////////////////////////////////////////////////////////////

void ogrenciAsistanVeSinifSiraDuzenleme(Asistan *asistanArray, Sinif *sinifArray, int islem)
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

void caliskanTembelArrayleriniDoldur(Ogrenci *ogrenciArray, Ogrenci *ogrenciArrayCaliskan, Ogrenci *ogrenciArrayTembel)
{
	int k = 0, l = 0;
	for(int i=0; ogrenciArray[i].getIsDolu() == true; i++)
	{
		if(ogrenciArray[i].getHarfnotu() == "AA" || ogrenciArray[i].getHarfnotu() == "BA" || ogrenciArray[i].getHarfnotu() == "BB")
		{
			ogrenciArrayCaliskan[k] = ogrenciArray[i];
			k++;
		}
		else if (ogrenciArray[i].getHarfnotu() == "CB" || ogrenciArray[i].getHarfnotu() == "CC" || ogrenciArray[i].getHarfnotu() == "DC" || ogrenciArray[i].getHarfnotu() == "DD")
		{
			ogrenciArrayTembel[l] = ogrenciArray[i];
			l++;
		}
	}	
}

void alttanAlanIlkAlanArrayleriniDoldur(Ogrenci *ogrenciArray, Ogrenci *ogrenciArrayIlkDefaAlanlar, Ogrenci *ogrenciArrayAlttanAlanlar)
{
	int k = 0, l = 0;
	for(int i=0; ogrenciArray[i].getIsDolu() == true; i++)
	{
		if(ogrenciArray[i].getDurum() == 1)
		{
			ogrenciArrayIlkDefaAlanlar[k] = ogrenciArray[i];
			k++;
		}
		else if (ogrenciArray[i].getDurum() == 0)
		{
			ogrenciArrayAlttanAlanlar[l] = ogrenciArray[i];
			l++;
		}
	}	
}