#include <stdio.h>


main(){
	int i,sayi,toplam=0,n[10];
	for(i=0;i<10;++i){
		printf("sayý gir");
		scanf("%d",&sayi);
		n[i]=sayi;		
	}
	for(i=0;i<10;++i){
		toplam += n[i];
	}
	printf("%d %d %d %d %d %d",n[1],n[2],n[4],n[8],n[9],n[3]);
	
}
