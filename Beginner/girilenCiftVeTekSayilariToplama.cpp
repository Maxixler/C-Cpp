#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,i,tekToplam=0,ciftToplam=0;
	
	for(i=1;i<=10;i++){
		cout<<i<<". sayýyý gir:";
		cin>>sayi;
		
		if(sayi%2==0){
			ciftToplam+=sayi;
		}
	else{
		tekToplam+=sayi
	}	
	}
	cout<<"çift sayýlar toplamý: "<<ciftToplam<<endl;
	
}
