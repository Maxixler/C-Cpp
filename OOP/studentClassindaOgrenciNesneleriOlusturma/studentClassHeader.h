    #include <iostream>
    using namespace std;

    class Student{
    private:
            string studentName,studentSurname,studentID;  //üye değişken
    public:        
        Student(); 
        Student(string,string,string);   
        Student(string,string); 
        ~Student();
        Student(const Student& oth);
            void displayInfo(); //üye fonks
            void setName(string name){
                studentName = name;
            }
            void setSurname(string surname){
                studentSurname = surname;
            }
            void setID(string ID){
                studentID = ID;
            }
            string getName(){
                return studentName;
            }
             string getSurname(){
                return studentSurname;
            }
             string getID(){
                return studentID;
            }
            void setInfo(string name,string surname, string ID){
                studentName = name;
                studentSurname = surname;
                studentID = ID;
            }
    };

    Student::Student(){
        cout<<"default const. worked"<<endl;
        studentID="None";
        studentName="None";
        studentSurname="None";

    }
    Student::Student(string name,string surname,string ID) {
        cout<<"2 const. worked"<<endl;
        studentName=name;
        studentSurname=surname;
        studentID=ID;

    }
    Student::Student(string name,string surname) {
        cout<<"3 const. worked"<<endl;
        studentName=name;
        studentSurname=surname;
        studentID="None";

    }
    Student::~Student(){
        cout<<"destructor worked"<<endl;



    }
    Student::Student(const Student &oth){
        cout<<"copy const worked."<<endl;
        studentName = oth.studentName;
        studentSurname = oth.studentSurname;
        studentID = oth.studentID;


    }
    
    
    
    
    
    
    
    
    
    void Student::displayInfo(){
        cout<<"Name: "<<studentName<< " Surname: " << studentSurname;
        cout<<" ID: "<<studentID<<endl;


    }