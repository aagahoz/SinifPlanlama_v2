#include <iostream>
#include "library.h"
#include <typeinfo>

int main() 
{
	Ogrenci *ogrenciArray;	
	Asistan *asistanArray;	
	Sinif *sinifArray;
	Ogrenci ogrenciArrayCaliskan[200];			Ogrenci ogrenciArrayTembel[200];
	Ogrenci ogrenciArrayIlkDefaAlanlar[200];	Ogrenci ogrenciArrayAlttanAlanlar[200];
	
	int genelIslem = 1, altIslem = 5;
	veritabaniniSifirla(&ogrenciArray, &asistanArray, &sinifArray, ogrenciArrayCaliskan, ogrenciArrayTembel, ogrenciArrayIlkDefaAlanlar, ogrenciArrayAlttanAlanlar, altIslem);
	
	cout << endl << "			*****   Program Basladi   *****	" << endl << endl << endl << endl;
	cout << " >>>> Lutfen konsolu TAM PENCERE boyutuna getiriniz! " << endl << endl << endl << endl;
	while(genelIslem)
	{
		try
		{
			genelMenu();
			cin >> genelIslem;
			switch(genelIslem)
			{
				case 0:
					cout << "Program Sonlandi! " << endl;
					break;
				case 1:
					listelemeMenu();
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							ogrenciInfo(ogrenciArray);
							break;
						case 2:
							asistanInfo(asistanArray);
							break;
						case 3:
							sinifInfo(sinifArray);
							break;
						case 4:
							asistanOgrenciListesiYazdir(asistanArray);
							break;
						case 5:
							sinifOgrenciListesiYazdir(sinifArray);
							break;
						case 6:
							ogrenciInfo(ogrenciArrayCaliskan);
							break;
						case 7:
							ogrenciInfo(ogrenciArrayTembel);
							break;
						case 8:
							ogrenciInfo(ogrenciArrayIlkDefaAlanlar);
							break;
						case 9:
							ogrenciInfo(ogrenciArrayAlttanAlanlar);
							break;
						default:
							throw altIslem;
					}
					break;
				case 2:
					dosyalamaMenu();
					cin >> altIslem;
					tumDosyaVeriGuncellemeVeOlusturma(ogrenciArray, asistanArray, sinifArray, ogrenciArrayCaliskan, ogrenciArrayTembel, ogrenciArrayIlkDefaAlanlar, ogrenciArrayAlttanAlanlar, altIslem);
					break;
				case 3:
					eklemeMenu();
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							ogrenciEkle(ogrenciArray);
							break;
						case 2:
							asistanEkle(asistanArray);
							break;
						case 3:
							sinifEkle(sinifArray);
							break;
						default:
							throw altIslem;
					}
					break;
				case 4:
					asistanDagitimMenu();
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							asistanlaraEsitAyirma(ogrenciArray, asistanArray);
							break;
						case 2:
							enAzSayidaAsistanaAyirma(ogrenciArray, asistanArray);
							break;
						default:
							throw altIslem;
					}
					break;
				case 5:
					sinifDagitimMenu();
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							siniflaraEsitAyirma(ogrenciArray, sinifArray);
							break;
						case 2:
							enAzSayidaSinifaAyirma(ogrenciArray, sinifArray);
							break;
						default:
							throw altIslem;
					}
					break;
				case 6:
					ogrenciIsterlerMenu();
					cin >> altIslem;
					switch(altIslem)
					{
						case 1:
							caliskanTembelArrayleriniDoldur(ogrenciArray, ogrenciArrayCaliskan, ogrenciArrayTembel);
							break;
						case 2:
							alttanAlanIlkAlanArrayleriniDoldur(ogrenciArray, ogrenciArrayIlkDefaAlanlar, ogrenciArrayAlttanAlanlar);
							break;
						default:
							throw altIslem;
					}
					break;
				case 7:
					veriTabaniSifirlamaMenu();
					cin >> altIslem;
					veritabaniniSifirla(&ogrenciArray, &asistanArray, &sinifArray, ogrenciArrayCaliskan, ogrenciArrayTembel, ogrenciArrayIlkDefaAlanlar, ogrenciArrayAlttanAlanlar, altIslem);
					break;
				default:
					throw genelIslem;
			}
		}
		catch (int hatakodu)
		{
			if(hatakodu < 0)
			{
				cout << " > 0`dan daha kucuk bir deger girdiniz, tekrar deneyiniz!" << endl;
			}
		}
	}
	cout << " >> Program Sonlandi!" << endl;
	system("pause");
	return 0;
}