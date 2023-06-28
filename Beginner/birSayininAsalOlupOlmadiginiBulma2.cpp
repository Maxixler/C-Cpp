#include<iostream>
using namespace std;
main(){
 	setlocale(LC_ALL,"Turkish");
 	int sayi,i,asalKontrol=0;
 	cout<<"sayý gir: ";
 	cin>>sayi;
 	for(i=2;i<=sayi/2;i++){
 		if(sayi%i==0){
 			asalKontrol=1;
 			cout<<"sayýnýz asal deðil";
 			break;
		 }
 		if(asalKontrol==0){
 			cout<<"Sayýnýz Asal";
 			
 			
		 }
	 }
 	
	
	
	
}
