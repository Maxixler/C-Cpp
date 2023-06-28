#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
/*	int kisakenar, uzunkenar,cevre,alan;
	cout<<"kısa kenar gir";
	cin>>kisakenar;
	cout<<"uzun kenar gir";
	cin>>uzunkenar;
	cevre= 2 * (kisakenar+uzunkenar);
	alan= kisakenar*uzunkenar;
	cout<<"Dikdörtgen çevresi: "<<cevre<<endl<<"dikdörtgen alanı: "<<alan;*/
	
/*	int sayi1,sayi2,sayi3;
	double ortalama;
	printf("1. sayıyı gir: ");
	scanf("%d",&sayi1);
	printf("2. sayıyı gir: ");
		scanf("%d",&sayi2);
	printf("3. sayıyı gir: ");
		scanf("%d",&sayi3);
		ortalama=double(sayi1+sayi2+sayi3)/3;
		printf("ortalama: %lf",ortalama); */
		
		float fiyat,tutar,oran,kdv;
		cout<<"ürün fiyatını gir: ";
		cin>>fiyat ;
		cout<<"kdv oranı gir: ";
		cin>>oran;
		kdv= (fiyat * oran)/100;
		tutar= fiyat + kdv;
		cout<<"kdv tutarı: "<<kdv<<endl<<"ürün fiyatı: "<<fiyat;
		
		
	
	
}
