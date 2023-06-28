#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL,"Turkish");
	int sayi,i;
	double toplam=0;
	printf("Bir sayý gir ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++){
		toplam = toplam + 1.0/i;
		
	}
printf("%f",toplam);
}
