#include<iostream>
#include<cstring>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	FILE *fp;
	char cumle[100],kr;
	fp= fopen("cumle.txt","w");
	if(fp==NULL){
		printf("baþarýsýz");
	}
	else{
		printf("bir cümle gir");
		gets(cumle);
		for (int i=0;i<strlen(cumle);i++){
			putc(cumle[i],fp);
			
		}
		fclose(fp);
	}
	
	
}
