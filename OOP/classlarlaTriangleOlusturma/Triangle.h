#include <iostream>
#include <string>
using namespace std;

class Triangle {
public:
    Triangle(float a, float b, float c);
    ~Triangle();
    Triangle(const Triangle& oth);
    bool isTriangle(float a, float b, float c);
    float getSideA() const{
        return sideA;
    }
    float getSideB() const{
        return sideB;
    }
    float getSideC() const{
        return sideC;
    }
    void setValue(float a, float b, float c){
        while(!isTriangle(a,b,c)){
        cout<<"a,b,c'yi gir"<<endl;
        cin>>a>>b>>c;
    }
    sideA = a;
    sideB = b;
    sideC = c;

    }
    bool isEquilateral();
    bool isScalene();
    bool isIsosceles ();
    void triangleType();
    float calculateArea();
private:
    float sideA, sideB, sideC;

};

Triangle::Triangle(float a,float b, float c){
    while(!isTriangle(a,b,c)){
        cout<<"a,b,c'yi gir"<<endl;
        cin>>a>>b>>c;
    }
    sideA = a;
    sideB = b;
    sideC = c;
    cout<<"Triangle Created"<<endl;
}

Triangle::~Triangle(){
    cout<<"triangle destroyed"<<endl;

}

Triangle::Triangle(const Triangle& oth){
    sideA = oth.sideA;
    sideB = oth.sideB;
    sideC = oth.sideC;
    cout<<"triangle copied"<<endl;
}

bool Triangle::isTriangle(float a,float b,float c){
    if(!((abs(b-c)<a && (a<b+c) ))){
        cout<<"geçersiz A"<<endl;
        return false;

    }
    if(!((abs(a-c)<b && (b<a+c) ))){
        cout<<"geçersiz B"<<endl;
        return false;

    }
    if(!((abs(b-a)<c && (c<b+a) ))){
        cout<<"geçersiz C"<<endl;
        return false;

    }
    return true;
}
bool Triangle::isEquilateral(){
    return (sideA == sideB && sideB == sideC;)
}
bool Triangle::isIsosceles(){
    if(isEquilateral()){
        return true;
    }
    else{
        return (sideA == sideB || sideB == sideC || sideA == sideC);
    }
}

bool Triangle::isScalene(){
    return !isEquilateral;

}





