#include <iostream>
#include <string>

using namespace std;

class Yemek { // Adım 1: Yemek sınıfı oluşturuldu
public:
    string ad;
    float fiyat;
    string ozellik; //yemek sınıfının değişkenleri tanımlandı

    void siparis_et() { // Adım 2: siparis_et fonksiyonu oluşturuldu
        cout << "Sipariş verildi. ";
    }
};

class Kebap : public Yemek { // Adım 3: Kebap sınıfı oluşturuldu
public:
    void siparis_et() { //siparis_et fonksiyonu override edildi
        cout << "Acili " << ozellik << " " << ad << " siparişi verildi, pişiyor." << endl;
    }
};

class Makarna : public Yemek { // Adım 3: Makarna sınıfı oluşturuldu
public:
    void siparis_et() { //siparis_et fonksiyonu override edildi
        cout << ozellik << " " << ad << " siparişi verildi, bekleyiniz." << endl;
    }
};

class Salata : public Yemek { // Adım 3: Salata sınıfı oluşturuldu
public:
    void siparis_et() { //siparis_et fonksiyonu override edildi
        cout << ad << " siparişi verildi, hazırlanma aşamasında." << endl;
    }
};

int main() {
    Kebap kebap; // Kebap sınıfından bir nesne oluşturuldu
    kebap.ad = "Adana kebap";
    kebap.fiyat = 45.00;
    kebap.ozellik = "ve duble";

    Makarna makarna; // Makarna sınıfından bir nesne oluşturuldu
    makarna.ad = "Mantarlı makarna";
    makarna.fiyat = 39.75;
    makarna.ozellik = "mantarlı";

    Salata salata; // Salata sınıfından bir nesne oluşturuldu
    salata.ad = "Coban salata";
    salata.fiyat = 27.00;
    salata.ozellik = "Balzamik sirkeli";

    kebap.siparis_et(); // Kebap sınıfının siparis_et fonksiyonu çağrıldı
    makarna.siparis_et(); // Makarna sınıfının siparis_et fonksiyonu çağrıldı
    salata.siparis_et(); // Salata sınıfının siparis_et fonksiyonu çağrıldı

    return 0;
}
