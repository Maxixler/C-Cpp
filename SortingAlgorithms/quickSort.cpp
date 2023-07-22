#include<stdio.h>
#include<math.h>
#define SIZE 10

main(){
	int temp,sayac;
	int arr[SIZE]={28,-35,-46,12,23,45,126,102,-89,3};
	printf("siralama öncesi: ");
	for(int i=0;i<SIZE;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<SIZE;++i){
		for(int j=0;j<SIZE;++j){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				++sayac;
			}
		}
	}
	printf("\n siralama sonrasi: ");
		for(int i=0;i<SIZE;i++){
		printf("%d ",arr[i]);

	}
	printf("\nsayaç degiskeni: %d \n",sayac);
}
