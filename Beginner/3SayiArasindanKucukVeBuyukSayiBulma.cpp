#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,sayi3;
	cout<<"Birinci sayýyý giriniz: ";
	cin>>sayi1;
	cout<<"Ýkinci sayýyý giriniz: ";
	cin>>sayi2;
	cout<<"Üçüncü sayýyý giriniz: ";
	cin>>sayi3;
	if(sayi1>sayi2 && sayi1>sayi3){
		cout<<"En büyük sayý birinci "<<sayi1<<endl;
	}
	else if(sayi2>sayi1&&sayi2>sayi3){
		cout<<"En büyük sayý ikinci "<<sayi2<<endl;
		
	}
	else{
		cout<<"En büyük sayý"<<sayi3<<endl;
	}
	
}
