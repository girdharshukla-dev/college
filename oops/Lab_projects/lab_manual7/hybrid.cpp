#include<iostream>
using namespace std;

class Person{
    public: string name; int age;
       void getPersonDetails(){
            cout<<"Enter name : ";
            cin>>name;
            cout<<"Enter age : ";
            cin>>age;
       }
       void showPersonDetails(){
            cout<<"Name : "<<name<<" , Age : "<<age<<endl;
       }
};

class Employee : virtual public Person{
    public : string empID;
        void getEmployeeDetails(){
            cout<<"Enter empID : ";
            cin>>empID;
        }
        void showEmployeeDetails(){
            cout<<"Employee ID : "<<empID<<endl;
        }
};

class Student : virtual public Person{
    public : string studentID;
        void getStudentDetails(){
            cout<<"Enter student ID : ";
            cin>>studentID;
        }
        void showStudentDetails(){
            cout<<"Student ID : "<<studentID;
        }
};

class TeachingAssistant : public Employee, public Student {
    public:
        void getTADetails(){
            getPersonDetails();
            getEmployeeDetails();
            getStudentDetails();
        }

        void showTADetails(){
            showPersonDetails();
            showEmployeeDetails();
            showStudentDetails();
        }
};

int main(){
    TeachingAssistant ta;
    ta.getTADetails();
    cout<<" ----- TA details are ----------------"<<endl;
    ta.showTADetails();
    return 0;
}