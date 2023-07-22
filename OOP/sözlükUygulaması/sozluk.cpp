#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Sözlük dosyası adı
const string dictionaryFile = "dictionary.txt";

// Kelime çiftlerini tutacak class
class WordPair {
public:
    string english;
    string local;
};

// Sözlük verilerini tutacak class
class Dictionary {
public:
    // Sözlük dosyasından verileri okuyan constructor
    Dictionary() {
        ifstream file(dictionaryFile);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                size_t pos = line.find(":");
                if (pos != string::npos) {
                    string key = line.substr(0, pos);
                    string value = line.substr(pos + 1);
                    WordPair pair;
                    pair.english = key;
                    pair.local = value;
                    pairs.push_back(pair);
                }
            }
            file.close();
        }
    }

    // Sözlük dosyasına verileri yazan destructor
    ~Dictionary() {
        ofstream file(dictionaryFile);
        if (file.is_open()) {
            for (auto it = pairs.begin(); it != pairs.end(); ++it) {
                file << it->english << ":" << it->local << endl;
            }
            file.close();
        }
    }

    // Kelime çevirme fonksiyonu
    void translateWord() {
        string word;
        cout << "Çevrilecek kelime: ";
        cin >> word;
        for (auto it = pairs.begin(); it != pairs.end(); ++it) {
            if (it->english == word) {
                cout << "Karşılığı: " << it->local << endl;
                return;
            }
        }
        string translation;
        cout << "Kelimenin yerel dilde karşılığı: ";
        cin >> translation;
        WordPair pair;
        pair.english = word;
        pair.local = translation;
        pairs.push_back(pair);
    }

    // Yeni kelime ekleme fonksiyonu
    void addWord() {
        string word, translation;
        cout << "Yeni kelime: ";
        cin >> word;
        cout << "Kelimenin yerel dilde karşılığı: ";
        cin >> translation;
        WordPair pair;
        pair.english = word;
        pair.local = translation;
        pairs.push_back(pair);
    }

    // Sözlüğü görüntüleme fonksiyonu
    void showDictionary() {
        for (auto it = pairs.begin(); it != pairs.end(); ++it) {
            cout << it->english << " : " << it->local << endl;
        }
    }

private:
    vector<WordPair> pairs;
};

// Kullanıcı arayüzü fonksiyonu
void showMenu() {
    cout << "1. Kelime çevir" << endl;
    cout << "2. Yeni kelime ekle" << endl;
    cout << "3. Sözlüğü görüntüle" << endl;
    cout << "4. Çıkış" << endl;
    cout << "Seçiminiz: ";
}
//Main fonksiyonu
int main() {
    Dictionary dictionary;
    int choice = 0;
    while (choice != 4) {
        showMenu();
        cin >> choice;
//Girilen değer sonucu yapılacak işlemler
        switch (choice) {
            case 1:
                dictionary.translateWord();
                break;
            case 2:
                dictionary.addWord();
                break;
            case 3:
                dictionary.showDictionary();
                break;
            case 4:
                cout << "Programdan çıkılıyor..." << endl;
                break;
            default:
                cout << "Geçersiz seçim!" << endl;
                break;
        }
    }
    return 0;
}
