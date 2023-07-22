#include <iostream>
#include <cstring>
#define SIZE 100
using namespace std;
void terstenYaz(char* s, int n) {
if (n == 0) {
return;
} else {
cout << s[n-1];
terstenYaz(s, n-1);
}
}
int main() {
char s[SIZE];
cout << "Bir karakter dizisi girin:";
cin.getline(s, SIZE);
int n = strlen(s);
terstenYaz(s, n);
return 0;
}
