#include <stdio.h>
#include<math.h>
#define SIZE 10
void insertion_sort(int arr[]);
main(){
	int i=0;
	int arr[] = {28, -35, -46, 12, 23, 45, 126, 102, -89, 3};
	printf("Siralama öncesi: ");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	puts("");
	insertion_sort(arr);
	printf("Siralama sonrasý: ");
	for(i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
}
void insertion_sort(int arr[]){
	int i,j,temp;
	for(i=1;i<SIZE;i++){
		temp=arr[i];
		j=i-1;
		while((temp<arr[j])&&(j>=0)){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=temp;
	}
}
