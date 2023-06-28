#include <iostream>
using namespace std;

class baseClass{
protected:
    int x;
public:
    void setX(int);
    int getX()const;
    void print();
    baseClass(int mainX=0){
        x=mainX;
        cout<<"Base class constructor worked"<<endl;
    }
    ~baseClass(){
        cout<<"Base class destructor worked"<<endl;
    }
    baseClass(const baseClass& oth){
        x = oth.x;
        cout<<"Base class copy constructor worked"<<endl;
    }
};

void baseClass::setX(int mainX){
    x = mainX;
}
int baseClass::getX()const{
    return x;
}
void baseClass::print(){
    cout<<"X: "<<x<<endl;
}

class derivedClass :public baseClass{
    public:
        int y;
        void setY(int mainY){
            y= mainY;
        }
        int getY()const{
            return y;
        }
        void print(){
            baseClass::print();
            cout<<"Y: "<<y<<endl;
        }
        derivedClass(int mainX=0,int mainY=0): baseClass(mainX){ 
            y=mainY;
            cout<<"derived class constructor worked"<<endl;
        }
        ~derivedClass(){
            cout<<"derived class deconstructor worked"<<endl;
        }
        derivedClass(const derivedClass& oth){
            x=oth.x;
            y=oth.y;
            cout<<"derived class copy-constructor worked"<<endl;
        }
};

class AClass{
public:
    int a;
    AClass(){
        cout<<"Aclass constructor worked"<<endl;
    }
    ~AClass(){
        cout<<"Aclass destructor worked"<<endl;
    }
};

class BClass{
public:
    int b;
    BClass(){
        cout<<"Bclass constructor worked"<<endl;
    }
    ~BClass(){
        cout<<"Bclass destructor worked"<<endl;
    }
};

class CClass : public AClass,public BClass{
public:
    CClass(){
        cout<<"Cclass constructor worked"<<endl;
    }
    ~CClass(){
        cout<<"Cclass destructor worked"<<endl;
    }
};
