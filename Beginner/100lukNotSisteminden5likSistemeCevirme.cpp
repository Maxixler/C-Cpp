#include<iostream>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
int sayi1,sayi2;

cout<<"aldýðýnýz notu giriniz";
cin>>sayi1;
if(sayi1>=85 && sayi1<=100){
	cout<<"5";
}
else if(sayi1>=70 && sayi1<=84){
	cout<<"4";
}
else if(sayi1>=55&& sayi1<=69){
	cout<<"3";
}
else if(sayi1>=45&& sayi1<=54){
	cout<<"2";
}
else if(sayi1>=0 && sayi1<=44){
	cout<<"1";
}
else{
	cout<<"yalanci";
}



}
