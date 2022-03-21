// ConsoleApplication2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


// Programı çalıştır: Ctrl + F5 veya Hata Ayıkla > Hata Ayıklamadan Başlat menüsü
// Programda hata ayıkla: F5 veya Hata Ayıkla > Hata Ayıklamayı Başlat menüsü


#include <iostream>//cout ve endl
#include <cstdlib> //rand() ve srand(seed)
#include <ctime>   //time(0)
using namespace std;
int main()
{
	srand(time(0));
	int Sayi;
	int birler=0, onlar=0, yuzler=0, binler=0;

	cout << "Pozitif 4 haneli bir sayi gir: ";
	cin >> Sayi;

	if (Sayi > 0 && Sayi != 0)
	{
		binler = Sayi / 1000;
	
	}
	cout <<"Binler Basamagi: "<< binler << endl;

	//---------------------------------------------------------------
	
	if(Sayi > 0 && Sayi != 0)
	{
		Sayi = Sayi - (1000 * binler);
		yuzler= Sayi / 100;
	}
	cout <<"Yuzler Basamagi: "<< yuzler << endl;

	//----------------------------------------------------------------

	if (Sayi > 0 && Sayi != 0)
	{
		Sayi = Sayi - (100 * yuzler);
		onlar = Sayi / 10;
		
	}
	cout <<"Onlar Basamagi: "<< onlar << endl;

	//----------------------------------------------------------------------------

	if (Sayi != 0 && Sayi > 0)
	{
		Sayi = Sayi - (10 * onlar);
		birler = Sayi / 1;
	}
	cout <<"Birler Basamagi: "<< birler << endl;

	//--------------------------------------------------------------------------------

	if (binler == yuzler && yuzler == onlar && onlar == birler)
	{
		cout << "\ntrue" << endl;
	}
	else
		cout << "\nfalse" << endl;






	/*while (rastgeleSayi > 0)//while(rastgeleSayi!=0)
	{
		basamak = rastgeleSayi % 10;
		toplam += basamak;
		rastgeleSayi /= 10;
	}
	cout << "Rastgele Uretilen Sayinin Basamaklarinin Toplami: "<< toplam << endl;*/
}






// Kullanmaya Başlama İpuçları: 
//   1. Dosyaları eklemek/yönetmek için Çözüm Gezgini penceresini kullanın
//   2. Kaynak denetimine bağlanmak için Takım Gezgini penceresini kullanın
//   3. Derleme çıktısını ve diğer iletileri görmek için Çıktı penceresini kullanın
//   4. Hataları görüntülemek için Hata Listesi penceresini kullanın
//   5. Yeni kod dosyaları oluşturmak için Projeye Git > Yeni Öğe ekle veya varolan kod dosyalarını projeye eklemek için Proje > Var Olan Öğeyi Ekle adımlarını izleyin
//   6. Bu projeyi daha sonra yeniden açmak için Dosya > Aç > Proje'ye gidip .sln uzantılı dosyayı seçin
