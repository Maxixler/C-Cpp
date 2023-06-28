#include <iostream>

using namespace std;

class complexNumber{
private:
    int real,imag;
public:
    complexNumber(int r=0, int i= 0);
    ~complexNumber();   
    complexNumber(const complexNumber& oth);
    int getReal() const{
        return real;
    };
    int getImag() const{
        return imag;
    };
    void setValue(int r=0, int i=0);
    complexNumber addComplex(const complexNumber& oth);
    complexNumber multiplyComplex(const complexNumber& oth);
    complexNumber subtractComplex(complexNumber& oth);
    complexNumber multiplyConstant(int constant);
    void multiplyMinus();
    void displayComplex();



};

complexNumber::complexNumber(int r,int i){
real = r;
imag = i;
cout<<"Complex Number created."<<endl;

}
complexNumber::~complexNumber(){
cout<<"complexNumber destroyed"<<endl;
}

complexNumber::complexNumber(const complexNumber& oth){
    real = oth.real;
    imag = oth.imag;
    cout<<"ComplexNumber Copied"<<endl;
}

void complexNumber::setValue(int r, int i){
    real = r;
    imag = i;
}

void complexNumber::displayComplex(){
cout<<real<<"+"<<imag<<"i"<<endl;

}
