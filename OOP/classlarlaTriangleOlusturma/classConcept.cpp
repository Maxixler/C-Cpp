#include "Triangle.h"

int main(){

float a,b,c;
cout<<"a b ve c'yi giriniz"<<endl;
cin>> a >> b >> c;
Triangle triangle1(a,b,c); 
Triangle triangle4 = {a,b,c};
Triangle triangle5{a,b,c};

Triangle triangle2(triangle1);
Triangle triangle3 = triangle1;

cout<<"triangle1:"<<endl;
cout<<"Side A: "<<triangle1.getSideA()<<endl;
cout<<"Side B: "<<triangle1.getSideB()<<endl;
cout<<"Side C: "<<triangle1.getSideC()<<endl;

triangle2.setValue(12,16,20);
cout<<"Side A: "<<triangle2.getSideA()<<endl;
cout<<"Side B: "<<triangle2.getSideB()<<endl;
cout<<"Side C: "<<triangle2.getSideC()<<endl;
}