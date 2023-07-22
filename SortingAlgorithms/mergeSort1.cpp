#include <stdio.h>
#define size 10

void merge(int a[],int,int,int);
void merge_sort(int a[],int,int);

int main(){
	int i,n;
	int arr[size]={28,-35,-46,12,23,45,126,1024,-89,3};
	merge_sort(arr,0,n-1);
	for(i=0;i<size;i++){
		printf("%d \t",arr[i]);
	}
	
}
void merge(int arr[],int bas, int orta, int son){
	int i=bas,j=orta+1,ind=bas,temp[size],h;
	while((i<=orta)&&(j<=son)){
		if(arr[i]<arr[j]){
			temp[ind]=arr[i];
			i++;
		}
		else{
			temp[ind]=arr[j];
			j++;
		}
	ind++;	
	}
	if(i>orta){
		while(j<=son){
			temp[ind]=arr[j];
			j++;
			ind;
		}
	}
	else{
		while(i<=orta){
			temp[ind]=arr[i];
			ind++;
			i++;
		}
	}
	for(h=bas;h<ind;h++){
		arr[h]=temp[h];
	}
}
void merge_sort(int arr[],int bas,int son){
	int orta;
	if(bas<son){
		orta=(bas+son)/2;
		merge_sort(arr,bas,orta);
		merge_sort(arr,orta+1,son);
		merge(arr,bas,orta,son);
	}
}
