#include <stdio.h>
#define size 10
void bubble_sort(int arr[]) {
    int i, j;
    for (i = 0; i < size; i++) {

        for (j = 0; j < size-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }
        }

    }
}

int main() {
    int arr[] = {28, -35, -46, 12, 23, 45, 126, 102, -89, 3};


    printf("Siralama öncesi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bubble_sort(arr);

    printf("Siralama sonrasi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

