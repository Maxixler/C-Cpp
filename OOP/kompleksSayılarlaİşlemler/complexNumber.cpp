#include "complexNumber.h"

int main()
{

complexNumber number1(2,3);
	complexNumber number2(-4, 7);
	complexNumber additionResult;
	complexNumber multiplicationResult;
	complexNumber subtractionResult;
	complexNumber constantResult;
	cout << "İlk Kompleks sayı: ";
	number1.displayComplex();
	cout << "İkinci Kompleks sayı: ";
	number2.displayComplex();
	additionResult = number1.addComplex(number2);
	cout << "Toplama Sonucu: ";
	additionResult.displayComplex();
	multiplicationResult = number1.multiplyComplex(number2);
	cout << "Çarpma Sonucu: ";
	multiplicationResult.displayComplex();
	
	subtractionResult = number1.subtractComplex(number2);
	cout << "Çıkarma Sonucu: ";
	subtractionResult.displayComplex();
	constantResult = number1.multiplyConstant(3);
	cout << "Sabitle sonucu: ";
	constantResult.displayComplex();

}