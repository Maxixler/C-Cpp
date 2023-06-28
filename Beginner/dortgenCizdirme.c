#include <stdio.h>

int main(void) {

  int sayi, a, b;
  printf("Bir sayi gir\n");
  scanf("%d", &sayi);
  if(sayi>=1 && sayi<=19 && (sayi%2)==1){
    for(a=1;a<=sayi;a+=2){
    
      for(b=0;b<(sayi-a)/2;b++){ 
        printf(" ");  
      }
        for(b = 0; b < a; b++){ 
            printf("*");  
        }
            printf("\n");
    }

    for(a=sayi-2;a>0; a -=2) {
                
      for(b = 0; b < (sayi - a) / 2; b++){
        printf(" ");
      }

      for(b = 0; b < a; b++){
        printf("*");
        }
      printf("\n");


    }
  }
  else{
    printf("1 ile 19 arasında sayi gir\n");
    
  }
    
  return 0;
}
