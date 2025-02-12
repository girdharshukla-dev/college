#include<iostream>
#include<string>
using namespace std;

class Person{
    int age;
    string name;
    public : 
        void setAge(int age) {
            this->age = age;
        }
        int getAge(){
            return this->age;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void display(){
            cout<<"inside Person parent"<<this->age;
        }
};

class Student : public Person{
    string number;
    public: 
        void setNumber(string number){
            this->number = number;
        }
        string getNumber(){
            return this->number;
        }
        void display(){
            cout<<"inside the child student class "<<this->number;
        }
};

int main(){
    Student student;
    student.setAge(19);
    student.setName("girdhar");
    student.setNumber("24u023007");
    student.display();
    student.Person::display();
    return 0;
}