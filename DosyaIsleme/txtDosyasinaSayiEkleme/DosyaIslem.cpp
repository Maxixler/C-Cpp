#include <iostream>
using namespace std;

main(){
	int sayi;
	FILE *fp;
	fp= fopen("Cdeneme.txt","w");
	if(fp== NULL){
		printf("basar�s�z");
	}
	else{
		for(int i=0;i<5;i++){
			printf("%d. say�n�z� girin:",i+1);
			scanf("%d",&sayi);
			fprintf(fp,"%d\n",sayi);
		}
	}
	fclose(fp);
	
}
