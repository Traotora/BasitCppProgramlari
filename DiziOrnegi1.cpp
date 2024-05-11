//11-05-2024 Cumartesi / traotora
/*
Diziler (arrays), ayný veri tipine sahip birden
fazla veriyi bünyelerinde saklayan veri
yapýlarýdýr. (Data Structures)
lDeðiþkenler içerisinde yalnýz bir tek bilgi
depolarken dizileri kullanarak ayný türden birden
fazla bilgiyi saklayabiliriz.
lProgramýmýz içerisinde kullanacaðýmýz 100
adet tam sayýyý 100 farklý deðiþken içinde
saklamak yerine bu amaçla içinde 100 tam
sayý saklý bir dizi kullanmak daha mantýklýdýr.
C++’ta diziler statik veri yapýlarýdýr. Yani
program iþletilmeden önce depolayacaklarý bilgi
miktarý belirlidir ve iþletilme esnasýnda bu miktar
hiçbir þekilde deðiþtirilemez.
lDaha sonraki derslerimizde göreceðimiz bazý
veri yapýlarýnýn (örneðin list, queue ve stack)
iþletilme esnasýnda (dinamik) kapasiteleri
büyüyebilir veya küçülebilir.
Diziler (Arrays)
Diziler (Arrays)
 Bir dizinin elemanlarýnýn hepsi ayný veri tipine sahiptir
ve bellekte ardýþýl olarak sýralanýrlar.
 Bir dizinin elemanlarýna indis (index) ile ulaþýlýr.
 Ýndis:
Belirli bir dizi elemanýna ulaþmak amacýyla pozisyon numarasý
olarak kullanýlýr.
Köþeli parantezler [ ] içerisine yazýlýr.
Dizinin ilk elemanýnýn indis deðeri daima sýfýrdýr.!!!!!!!
Örnek1: 5 elemanlý a[5] dizisinin elemanlarýnýn indis deðerleri
sýrasýyla 0, 1, 2, 3, 4 olur.
Örnek2: (a=5 ve b=6 deðerleri için)
• c[a+b]+=2; deyimi
- c[11] dizi elemanýnýn deðerine 2 ekler.
*/
#include"iostream"
#include"iomanip" // setw
using namespace std;
main()
{
	int n[10]; // 10 tamsayý saklayan n adlý dizi
	
	//Dizi elemanlarýna sýrasýyla 0'dan 9'a kadar deðer atýyor.
	for(int i=0;i<10;i++)  n[i]=0; //dizinin i'inci elemanlarýna sýfýr deðeri atýyor.
	
	cout<<"Eleman"<<setw(13)<<"Deger"<<endl;
	
	for(int j=0;j<10;j++)
	    cout<<setw(6)<<j<<setw(13)<<n[j]<<endl;
	    
    return 0;
}
