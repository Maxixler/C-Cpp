#include "studentClass.h"

int main(){

Student student1("Eren","Yılmaz","1878");
Student student2("Pamuk","kale");
Student student3(student2);

student3.displayInfo();

Student studentArray[5];



 /* student1.setName("eren");
student1.setSurname("kale");
student1.setID("1976"); */

string name = student1.getName();
string surname = student1.getSurname();
string id = student1.getID();
cout<<"Name: "<<name<<" Surname: "<<surname<<" ID: "<<id<<endl;

/* student2.setInfo("pamuk","kale","1474"); */
student2.displayInfo();

if(1){
    Student student5;
}
cout<<"student5";

 return 0;
}
