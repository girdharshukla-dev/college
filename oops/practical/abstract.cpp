#include<iostream>
using namespace std;

class Animal{
    public : virtual void makeSound() = 0;
    void eat(){
        cout<<"This animal can eat"<<endl;
    }
};

class Dog : public Animal{
    public : void makeSound() override {
        cout<<"Dog barks"<<endl;
    }
};

int main(){
    Dog* dog = new Dog();
    dog->makeSound();
    dog->eat();
    return 0;
}