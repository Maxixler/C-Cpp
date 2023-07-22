#include <iostream>
#define SIZE 10
using namespace std;

int main() {

    int dizi[SIZE] = {9, 8, 8, 1, 4, 5, 3, 7, 8, 2};
    int dizi2[SIZE];
    int boyut = 0;

    for (int i = 0; i < SIZE; i++) {
        bool tekrar = 0;
        for (int j = 0; j < boyut; j++) {
            if (dizi[i] == dizi2[j]) {
                tekrar = 1;
                break;
            }
        }
        if (!tekrar) {
            dizi2[boyut] = dizi[i];
            boyut++;
        }
    }

    cout << "Eski Dizi: ";
    for (int i = 0; i < SIZE; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl;

    cout << "Yeni Dizi: ";
    for (int i = 0; i < boyut; i++) {
        cout << dizi2[i] << " ";
    }
    cout << endl;

    return 0;
}

