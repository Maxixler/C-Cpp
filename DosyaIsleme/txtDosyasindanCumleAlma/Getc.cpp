#include<iostream>
#include<cstring>
using namespace std;

main(){
	setlocale(LC_ALL,"Turkish");
	FILE *fp;
	char ch;
	fp= fopen("cumle.txt","r");
	if(fp==NULL){
		printf("ba�ar�s�z");
	}
	else{
		while((ch=getc(fp))!=EOF){
			printf("%c",ch);
			
		}
		
		}
			fclose(fp);
	}
	

