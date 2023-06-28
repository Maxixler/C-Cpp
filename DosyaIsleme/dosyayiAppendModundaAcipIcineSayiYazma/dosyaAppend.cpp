#include <iostream>
using namespace std;

main(){
	int sayi;
	FILE *fp;
	fp=fopen("Cdeneme.txt","a");
	if(fp== NULL){
		printf("baþarýsýz");	
	}	
	else{
		for(int i=0;i<3;i++){
			printf("%d. sayýnýzý girin:",i+1);
			scanf("%d",&sayi);
			fprintf(fp,"%d\n",sayi);
		}
	}
	fclose(fp);
}
