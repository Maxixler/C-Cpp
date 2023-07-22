#include <iostream>

using namespace std;

int main() {
    int n = 8, m = 6;
    int dizi1[n] = {1, 2, 3, 4 ,5 ,6 ,7 ,8};
    int dizi2[m] = {9, 10, 11, 12, 13, 14};
    int diziToplu[14];

    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (dizi1[i] < dizi2[j]) {
            diziToplu[k] = dizi1[i];
            i++;
        } else {
            diziToplu[k] = dizi2[j];
            j++;
        }
        k++;
    }

    while (i < n) {
        diziToplu[k] = dizi1[i];
        i++;
        k++;
    }
    while (j < m) {
        diziToplu[k] = dizi2[j];
        j++;
        k++;
    }

    cout << "Yeni Dizi: ";
    for (int i = 0; i < n + m; i++) {
        cout << diziToplu[i] << "\t";
    }
    cout << endl;

    return 0;
}

