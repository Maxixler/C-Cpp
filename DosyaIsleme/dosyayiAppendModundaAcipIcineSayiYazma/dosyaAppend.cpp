#include <iostream>
using namespace std;

main(){
	int sayi;
	FILE *fp;
	fp=fopen("Cdeneme.txt","a");
	if(fp== NULL){
		printf("ba�ar�s�z");	
	}	
	else{
		for(int i=0;i<3;i++){
			printf("%d. say�n�z� girin:",i+1);
			scanf("%d",&sayi);
			fprintf(fp,"%d\n",sayi);
		}
	}
	fclose(fp);
}
