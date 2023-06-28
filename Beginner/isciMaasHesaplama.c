#include <stdio.h>

int main(void) {

  int a;
  float b, c, d;
  printf("müdür(1)  Vardiyali iþçi(2)  Komisyon üyesi(3)  parça iþçisi(4)\n");
  scanf("%d", &a);

  while(a!=-1){
    switch(a){
      case 1:
        printf("müdür maaþý = 500tl\n");
      break;

      case 2:
        printf("kaç saat satýþ yaptý\n");
        scanf("%f", &b);      
        if(b>40){
          b=b-40;
          b=b*1.5;
          b=b*5;
          b=b+250;
          printf("Vardiyali iþçi maaþý = %ftl\n", b);  
        }
      else
        printf("Vardiyali iþçi maaþý = 250tl\n");
      break;
      case 3:
        printf("Ne kadar saat satýþ yaptý\n");
        scanf("%f", &c);
        c=c*5;
        c=c/5.7;
        c=c+250;
        printf("Komisyon üyesi maaþý = %f\n", c);
      break;
      case 4:
        printf("kaç parça üretti\n");
        scanf("%f", &d);
        d=d*2.5;
        printf("parça iþçisi maaþý = %f\n", d);
      break;
      default:
        printf("1 2 3 4 dýþý sayý girdiniz\n");
    }
    printf("Yeni deðer gir\n");
    scanf("%d", &a);
  }
  
  return 0;
}
