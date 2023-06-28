#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,i,asalKontrol;
	cout<<"say� giriniz: ";
	cin>>sayi;
	asalKontrol=0;
	for(i=2;i<=sayi/2;i++){
		if(sayi%i==0){
			asalKontrol=1;
			cout<<sayi<<"asal degil";
			break;
		}
	
	}
	if(asalKontrol==0){
		cout<<"say�n�z asal ";
	}

}
