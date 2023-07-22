#include <iostream>
#include <stddef.h>

using namespace std;

void buyukKucukHarf(char *metin) {
    while (*metin != '\0') {
        if (*metin >= 'a' && *metin <= 'z') {
            cout << (char) (*metin - 32);
        } else if (*metin >= 'A' && *metin <= 'Z') { 
            cout << (char) (*metin + 32);
        } else {
            cout << *metin;
        }
        metin++; 
    }
}

int main() {
    char metin[100];

    cout << "Harflerine ayr�lacak metni giriniz: ";
    cin.getline(metin, 100);

    cout << "Girilen metnin k���k ve b�y�k harfleri: ";
    buyukKucukHarf(metin);

    return 0;
}

