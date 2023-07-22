#include <stdio.h>
#include<math.h>
#define size 10
void selection_sort(int arr[]){
	int i,j,min;
	for(i=0;i<size;i++){
		min=i;
		for(j=i+1;j<size;j++){
			if(arr[j]<arr[min]){
				min=j;
			}
			
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	
	
}
main(){
	int n,i=0;
	int arr[10]={28,-35,-46,12,23,45,126,102,-89,3};
	selection_sort(arr);
	for(i=0;i<size;i++){
		printf("%d\t",arr[i]);
	}
}

