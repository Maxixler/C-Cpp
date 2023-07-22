#include <iostream>

using namespace std;

void kucukHarfeCevir(char *metin) {
    while (*metin != '\0') { 
        if (*metin >= 'A' && *metin <= 'Z') { 
            *metin = *metin + 32;
        }
        metin++; 
    }
}

void buyukHarfeCevir(char *metin) {
    while (*metin != '\0') { 
        if (*metin >= 'a' && *metin <= 'z') { 
            *metin = *metin - 32;
        }
        metin++; 
    }
}

int main() {
    char metin[100];

    cout << "Metin giriniz: ";
    cin.getline(metin, 100);

    kucukHarfeCevir(metin); 
    cout << "Küçük harfli metin: " << metin << endl;
	buyukHarfeCevir(metin);
	cout << "Büyük harfli metin: " << metin << endl;
    return 0;
}

