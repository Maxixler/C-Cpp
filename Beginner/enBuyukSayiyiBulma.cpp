#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
int i,a[10],enBuyuk=0;
printf("10 Tane sayý giriniz: \n");
for(i=0;i<10;++i){
	scanf("%d",&a[i]);
}
for(i=0;i<10;++i){
	if(a[i]>enBuyuk){
		enBuyuk=a[i];
	}
}
	printf("En buyuk sayi: %d",enBuyuk);
	
}
