#include <stdio.h>

int main(void) {

  int a;
  float b, c, d;
  printf("m�d�r(1)  Vardiyali i��i(2)  Komisyon �yesi(3)  par�a i��isi(4)\n");
  scanf("%d", &a);

  while(a!=-1){
    switch(a){
      case 1:
        printf("m�d�r maa�� = 500tl\n");
      break;

      case 2:
        printf("ka� saat sat�� yapt�\n");
        scanf("%f", &b);      
        if(b>40){
          b=b-40;
          b=b*1.5;
          b=b*5;
          b=b+250;
          printf("Vardiyali i��i maa�� = %ftl\n", b);  
        }
      else
        printf("Vardiyali i��i maa�� = 250tl\n");
      break;
      case 3:
        printf("Ne kadar saat sat�� yapt�\n");
        scanf("%f", &c);
        c=c*5;
        c=c/5.7;
        c=c+250;
        printf("Komisyon �yesi maa�� = %f\n", c);
      break;
      case 4:
        printf("ka� par�a �retti\n");
        scanf("%f", &d);
        d=d*2.5;
        printf("par�a i��isi maa�� = %f\n", d);
      break;
      default:
        printf("1 2 3 4 d��� say� girdiniz\n");
    }
    printf("Yeni de�er gir\n");
    scanf("%d", &a);
  }
  
  return 0;
}
