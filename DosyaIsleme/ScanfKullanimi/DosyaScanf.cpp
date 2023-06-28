#include <iostream>
using namespace std;

main(){
	int sayi;
	FILE *fp;
	fp = fopen("Cdeneme.txt","r");
	if(fp== NULL){
		printf("basarýsýz");
	}
	else{
		while(fscanf(fp,"%d",&sayi)!=EOF){	
		printf("%d\n",sayi);
	}
	
}
}
