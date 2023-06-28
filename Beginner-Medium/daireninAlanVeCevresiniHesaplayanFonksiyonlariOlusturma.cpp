#include<iostream>
using namespace std;

double cevreHesapla(double yaricap){
		int cevre;
		cevre=2*3.14*double(yaricap);
		return cevre;
}
double alanHesapla(double yaricap){
	double alan;
	alan= 3.14 * double(yaricap) * yaricap;
	return alan;
	
}
main(){
	setlocale(LC_ALL,"Turkish");
	double r, alan, cevre ;
	cout<<"Yarýçapý gir: ";
	cin>>r;
	alan = alanHesapla(r);
	cevre = cevreHesapla(r);
	
	cout<<"Alan: "<<alan<<endl;
	cout<<"Çevre: "<<cevre<<endl;
	
	
}
