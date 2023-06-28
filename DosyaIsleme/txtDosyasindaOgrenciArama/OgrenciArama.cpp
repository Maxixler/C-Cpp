#include <iostream>
#include <conio.h>
#include<cstring>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	FILE *fp;
	char ad[20],babaAdi[20],arama[20];
	int dYili,bayrak=0;
	fp=fopen("ogrenci.txt","r");
	if(fp==NULL){
		printf("baþarýsýz");
	}
	else{
		printf("kimin kaydý getirilsin: ");
		scanf("%s",arama);
		while(fscanf(fp,"%s %s %d",ad,babaAdi,&dYili) != EOF){
			 if(strcmp(ad,arama)==0){
			 	printf("%s\t %s\t %d \n",ad,babaAdi,dYili);
				bayrak =1; 	
			 }
			 
		}
		if(bayrak==0){
			 	printf("Kayýt bulunamadý");
			 }
	}
	
	
	
}


