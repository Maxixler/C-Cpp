#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,i,bolen=2;
	cout<<"say�n�z� giriniz: ";
	cin>>sayi;
	while(sayi >= bolen){
		if(sayi%bolen==0){
			sayi /= bolen;
			cout<<bolen<<endl1;
		}
		else{
			bolen++;
		}
	}
	
	
}
