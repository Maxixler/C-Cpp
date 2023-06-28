#include<iostream>
using namespace std;

class dikdortgen{
    public:
        int en;
        int boy;
        int alan(){
            return en*boy;
        }  
        int cevre(){
            return 2*(en+boy);
        }
};


int main(){
dikdortgen bir;
dikdortgen iki;
bir.en=5;
bir.boy=2;
iki.en=3;
iki.boy=8;
cout<<"1. dikt. alan: "<<bir.alan()<<" 1. dikt cevre"<<bir.cevre()<<endl;
cout<<"2. dikt. alan: "<<iki.alan()<<" 2. dikt cevre"<<iki.cevre()<<endl;
}