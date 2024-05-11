//11-05-2024 Cumartesi / traotora
/*
Diziler (arrays), ayn� veri tipine sahip birden
fazla veriyi b�nyelerinde saklayan veri
yap�lar�d�r. (Data Structures)
lDe�i�kenler i�erisinde yaln�z bir tek bilgi
depolarken dizileri kullanarak ayn� t�rden birden
fazla bilgiyi saklayabiliriz.
lProgram�m�z i�erisinde kullanaca��m�z 100
adet tam say�y� 100 farkl� de�i�ken i�inde
saklamak yerine bu ama�la i�inde 100 tam
say� sakl� bir dizi kullanmak daha mant�kl�d�r.
C++�ta diziler statik veri yap�lar�d�r. Yani
program i�letilmeden �nce depolayacaklar� bilgi
miktar� belirlidir ve i�letilme esnas�nda bu miktar
hi�bir �ekilde de�i�tirilemez.
lDaha sonraki derslerimizde g�rece�imiz baz�
veri yap�lar�n�n (�rne�in list, queue ve stack)
i�letilme esnas�nda (dinamik) kapasiteleri
b�y�yebilir veya k���lebilir.
Diziler (Arrays)
Diziler (Arrays)
 Bir dizinin elemanlar�n�n hepsi ayn� veri tipine sahiptir
ve bellekte ard���l olarak s�ralan�rlar.
 Bir dizinin elemanlar�na indis (index) ile ula��l�r.
 �ndis:
Belirli bir dizi eleman�na ula�mak amac�yla pozisyon numaras�
olarak kullan�l�r.
K��eli parantezler [ ] i�erisine yaz�l�r.
Dizinin ilk eleman�n�n indis de�eri daima s�f�rd�r.!!!!!!!
�rnek1: 5 elemanl� a[5] dizisinin elemanlar�n�n indis de�erleri
s�ras�yla 0, 1, 2, 3, 4 olur.
�rnek2: (a=5 ve b=6 de�erleri i�in)
� c[a+b]+=2; deyimi
- c[11] dizi eleman�n�n de�erine 2 ekler.
*/
#include"iostream"
#include"iomanip" // setw
using namespace std;
main()
{
	int n[10]; // 10 tamsay� saklayan n adl� dizi
	
	//Dizi elemanlar�na s�ras�yla 0'dan 9'a kadar de�er at�yor.
	for(int i=0;i<10;i++)  n[i]=0; //dizinin i'inci elemanlar�na s�f�r de�eri at�yor.
	
	cout<<"Eleman"<<setw(13)<<"Deger"<<endl;
	
	for(int j=0;j<10;j++)
	    cout<<setw(6)<<j<<setw(13)<<n[j]<<endl;
	    
    return 0;
}
