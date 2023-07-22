#include <stdio.h>
#define SIZE 10
void shell_sort(int arr[]) {
	int sayac=0;
    for (int fark = SIZE / 2; fark > 0; fark /= 2) {
        for (int i = fark; i < SIZE; i += 1) {

            int temp = arr[i];


            int j;
            for (j = i; j >= fark && arr[j - fark] > temp; j -= fark) {
                arr[j] = arr[j - fark];

            }


            arr[j] = temp;

            sayac++;

        }
    }
    printf("\nsayaç degiskeni: %d \n",sayac);
}

int main() {
    int arr[SIZE] = {28, -35, -46, 12, 23, 45, 126, 102, -89, 3};
    int sayac;

    printf("Siralama öncesi: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    shell_sort(arr);

    printf("Siralama sonrasý: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

