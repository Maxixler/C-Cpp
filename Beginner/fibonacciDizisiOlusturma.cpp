#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int a=1,b=1,c=1,i,n;
	cout<<"Sayý giriniz: "<<endl;
	cin>>n;
	cout<<a<<" "<<b;
	for(i=0;i<n;i++){
		c= a + b;
		a=b;
		b=c;
		cout<<" "<<c;
	}
	
}
