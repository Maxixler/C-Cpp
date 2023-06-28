#include <stdio.h>
#include<math.h>


unsigned long long int fakt(int x);

int main(){

	for(unsigned int i=0;i<=20;i++){
		printf("%u!=%llu\n",i,fakt(i));
	}	
}
unsigned long long int fakt(int x){
	if (x<=1){
		return 1;
	}
	else{
		return (x * fakt(x-1));
	}
}
