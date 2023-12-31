#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void count_sort(int arr[], int n, int exp) {
    int output[n];
    int i, count[10] = {0};


    for (i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }


    for (i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }


    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radix_sort(int arr[], int n) {

    int m = get_max(arr, n);

    for (int exp = 1; m / exp > 0; exp *= 10) {
        count_sort(arr, n, exp);
    }
}

int main() {
    srand(time(0));

    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }

    printf("Siralama �ncesi: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    radix_sort(arr, 10);

    printf("Siralama sonras�: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

