#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,i,bolen=2;
	cout<<"sayýnýzý giriniz: ";
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
