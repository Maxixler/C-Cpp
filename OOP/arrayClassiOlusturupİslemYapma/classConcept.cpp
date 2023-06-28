#include "Array.h"



int main(){

Array mainArray(10);
Array mainArray2(mainArray);
cout<<"Capacity: "<<mainArray.getCapacity()<<endl;
cout<<"Size: "<<mainArray.getSize()<<endl;

cout<<"Capacity: "<<mainArray2.getCapacity()<<endl;
cout<<"Size: "<<mainArray2.getSize()<<endl;

mainArray.AddItem(5);
mainArray.AddItem(12);
mainArray.AddItem(3);
mainArray.AddItem(8);
mainArray.AddItem(7);
mainArray.AddItem(42);
mainArray.AddItem(25);
mainArray.AddItem(44);
mainArray.AddItem(13);
mainArray.printItems();
mainArray.AddItem(28);
mainArray.AddItem(27);
mainArray.AddItem(342);
mainArray.printItems();

    Array mainArray3 = mainArray;
    mainArray3.printItems();

    return 0;
}