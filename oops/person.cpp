#include<stdio.h>
#include<iostream>
#include<ostream>

struct Person{
   int age;
   int height;
   void printDetails(){
     std::cout<<this->age<<"\n";
     std::cout<<this->height;
   }
};

int main(){
    Person* personPtr = new Person();
    personPtr->age = 20;
    personPtr->height = 165;
    Person& personRef = *personPtr;
    personRef.age=50;
    personPtr->printDetails();
    delete personPtr;
    return 0;
}

