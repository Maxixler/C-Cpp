#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void base_sort(int arr[], int n) {
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    srand(time(0)); // Seed the random number generator

    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1; // Generate a random number between 1 and 100
    }

    printf("Siralama öncesi: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    base_sort(arr, 10); // Sort the array

    printf("Siralama sonrasi: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

