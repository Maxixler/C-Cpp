#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int sayi;
	printf("5 Basamakl� bir say� giriniz");
	scanf("%d",&sayi);
	if(sayi%10==sayi/10000&&sayi%100/10==(sayi/1000)%10){
	printf("say� palindrom");
}
else{
	printf("say� polindrom de�ildir");
}	
	
}
