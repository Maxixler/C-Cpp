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
		printf("ba�ar�s�z");
	}
	else{
		while(1){
			printf("��renci ad�: ");
			scanf("%s",&ad);
			printf("��renci baba ad�: ");
			scanf("%s",&babaAdi);
			printf("Do�um Y�l�: ");
			scanf("%d",&dYil);
			fprintf(fp,"%s\t %s\t %d\n",ad,babaAdi,dYil);
		
			printf("yeni kay�t eklenecek mi (e / h)");
			devam = getche();
			if(devam=='h'){
				break;
			}	
		printf("\n"); 
		}
	}
	fclose(fp);
} 
