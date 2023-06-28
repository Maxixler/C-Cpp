#include <iostream>
#include "complexNumber.h"

int main(){

complexNumber number1(4,5);
cout<<"Real: "<<number1.getReal()<<endl;;
cout<<"Imag: "<<number1.getImag();
number1.displayComplex();

    return 0;
}