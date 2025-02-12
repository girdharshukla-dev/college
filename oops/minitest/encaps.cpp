#include<iostream>
#include<string>
using namespace std;

class Person{
    private:
       int age;
       string name;

    public:
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return this->age;
        }

};


int main(){
    // Person person;
    // person.setAge(19);
    // person.setName("girdhar");
    // cout<<person.getName()<<" "<<person.getAge();

    Person* person = new Person();
    person->setAge(19);
    person->setName("girdhar");
    
    Person& personRef = *person;
    
    cout<<personRef.getName()<<" "<<personRef.getAge();


    return 0;

}