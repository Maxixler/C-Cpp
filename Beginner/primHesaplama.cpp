#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int satis;
	while(satis!= EOF){
	printf("Dolar cinsinden sat�� tutar�n� giriniz(��k�� i�in -1): ");
	scanf("%d",&satis);
	printf("Maa�: %d\n",200+(satis*9/100));
}
	
	
}
