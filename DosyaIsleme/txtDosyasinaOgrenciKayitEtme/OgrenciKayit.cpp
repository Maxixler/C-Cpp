#include <iostream>
#include<conio.h>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	char ad[20],babaAdi[20],devam;
	int sayi,dYil;
	FILE *fp;
	fp=fopen("ogrenci.txt","w");
	if(fp==NULL){
		printf("baþarýsýz");
	}
	else{
		while(1){
			printf("Öðrenci adý: ");
			scanf("%s",&ad);
			printf("Öðrenci baba adý: ");
			scanf("%s",&babaAdi);
			printf("Doðum Yýlý: ");
			scanf("%d",&dYil);
			fprintf(fp,"%s\t %s\t %d\n",ad,babaAdi,dYil);
		
			printf("yeni kayýt eklenecek mi (e / h)");
			devam = getche();
			if(devam=='h'){
				break;
			}	
		printf("\n"); 
		}
	}
	fclose(fp);
} 
