#include "classInheritance.h"

int main(){

   /* baseClass obj1(5);
    derivedClass obj2(8,3);
 
    derivedClass obj3(obj2);

        cout<<"For base; X:"<<obj1.getX()<<endl;
        
        cout<<"For derived; X:"<<obj2.getX()<<endl;     */

   /*    CClass cObject;
    cObject.a=5;
    cObject.b=7;        */
baseClass obj1(5);
    derivedClass obj2(8,3);
obj1.print();
obj2.print();

    return 0;
}