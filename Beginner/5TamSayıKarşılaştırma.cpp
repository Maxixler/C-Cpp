#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int a,b,c,d,e;
	printf("5 tane farkl� Tamsay� giriniz:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
if(a>b && a>c && a>d && a>e){
	printf("En b�y�k say� %d\n",a);
}
else if(b>a && b>c && b>d && b>e){
	printf("En b�y�k say� %d\n",b);
}
else if(c>a && c>b && c>d && c>e){
	printf("En b�y�k say� %d\n",c);
}	
else if(d>a && d>c && d>b && d>e){
	printf("En b�y�k say� %d\n",d);
}
else{
	printf("En b�y�k say� %d\n",e);
}
			if(a<b && a<c && a<d && a<e){
	printf("En k���k say� %d",a);
}
else if(b<a && b<c && b<d && b<e){
	printf("En k���k say� %d",b);
}
else if(c<a && c<b && c<d && c<e){
	printf("En k���k say� %d",c);
}	
else if(d<a && d<c && d<b && d<e){
	printf("En k���k say� %d",d);
}
else{
	printf("En k���k say� %d",e);
}
	
}
