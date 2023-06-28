#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c,d,e;
	printf("5 tane farklý Tamsayý giriniz:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a>b && a>c && a>d && a>e){
	printf("En büyük sayý %d\n",a);
}
else if(b>a && b>c && b>d && b>e){
	printf("En büyük sayý %d\n",b);
}
else if(c>a && c>b && c>d && c>e){
	printf("En büyük sayý %d\n",c);
}	
else if(d>a && d>c && d>b && d>e){
	printf("En büyük sayý %d\n",d);
}
else{
	printf("En büyük sayý %d\n",e);
}
			if(a<b && a<c && a<d && a<e){
	printf("En küçük sayý %d",a);
}
else if(b<a && b<c && b<d && b<e){
	printf("En küçük sayý %d",b);
}
else if(c<a && c<b && c<d && c<e){
	printf("En küçük sayý %d",c);
}	
else if(d<a && d<c && d<b && d<e){
	printf("En küçük sayý %d",d);
}
else{
	printf("En küçük sayý %d",e);
}
	
}
