#include<iostream>
using namespace std;

template<typename T>

	T guncelle(T a){
		return ++a;
		
	}
main(){
	int a=5;
	double b=10.3;
	cout<<guncelle(a)<<endl;
	
	
}
