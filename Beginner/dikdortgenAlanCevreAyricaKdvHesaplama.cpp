#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
/*	int kisakenar, uzunkenar,cevre,alan;
	cout<<"k�sa kenar gir";
	cin>>kisakenar;
	cout<<"uzun kenar gir";
	cin>>uzunkenar;
	cevre= 2 * (kisakenar+uzunkenar);
	alan= kisakenar*uzunkenar;
	cout<<"Dikd�rtgen �evresi: "<<cevre<<endl<<"dikd�rtgen alan�: "<<alan;*/
	
/*	int sayi1,sayi2,sayi3;
	double ortalama;
	printf("1. say�y� gir: ");
	scanf("%d",&sayi1);
	printf("2. say�y� gir: ");
		scanf("%d",&sayi2);
	printf("3. say�y� gir: ");
		scanf("%d",&sayi3);
		ortalama=double(sayi1+sayi2+sayi3)/3;
		printf("ortalama: %lf",ortalama); */
		
		float fiyat,tutar,oran,kdv;
		cout<<"�r�n fiyat�n� gir: ";
		cin>>fiyat ;
		cout<<"kdv oran� gir: ";
		cin>>oran;
		kdv= (fiyat * oran)/100;
		tutar= fiyat + kdv;
		cout<<"kdv tutar�: "<<kdv<<endl<<"�r�n fiyat�: "<<fiyat;
		
		
	
	
}
