#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#define SIZE 10

using namespace std;

int main() {
    int dizi[SIZE];
    float toplam = 0, ortalama = 0, StandartSapma = 0;

    srand(time(0));
    for (int i = 0; i < SIZE; i++) {
        dizi[i] = rand() % 100 + 1;
        toplam += dizi[i];
    }

    ortalama = toplam / SIZE;

    for (int i = 0; i < SIZE; i++) {
        StandartSapma += pow(dizi[i] - ortalama, 2);
    }
    StandartSapma = sqrt(StandartSapma / SIZE);


    cout << "Dizi: ";
    for (int i = 0; i < SIZE; i++) {
        cout << dizi[i] << " ";
    }
    cout << endl << "Ortalama: " << ortalama << endl;
    cout << "Standart Sapma: " << StandartSapma << endl;

    return 0;
}

