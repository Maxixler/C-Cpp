#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi1,sayi2,sayi3;
	cout<<"Birinci say�y� giriniz: ";
	cin>>sayi1;
	cout<<"�kinci say�y� giriniz: ";
	cin>>sayi2;
	cout<<"���nc� say�y� giriniz: ";
	cin>>sayi3;
	if(sayi1>sayi2 && sayi1>sayi3){
		cout<<"En b�y�k say� birinci "<<sayi1<<endl;
	}
	else if(sayi2>sayi1&&sayi2>sayi3){
		cout<<"En b�y�k say� ikinci "<<sayi2<<endl;
		
	}
	else{
		cout<<"En b�y�k say�"<<sayi3<<endl;
	}
	
}
