#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int satis;
	while(satis!= EOF){
	printf("Dolar cinsinden satýþ tutarýný giriniz(Çýkýþ için -1): ");
	scanf("%d",&satis);
	printf("Maaþ: %d\n",200+(satis*9/100));
}
	
	
}
