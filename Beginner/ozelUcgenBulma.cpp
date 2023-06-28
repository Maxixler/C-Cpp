#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c;	

	for(c=1;c<=500;c++){
		for(b=1;b<=500;b++){
			for(a=1;a<=500;a++){
				if(pow(c,2)==pow(b,2)+pow(a,2)){
				printf("%d %d %d",a,b,c);	
				printf("\n");
				}
			}
			
		}
	}
}
