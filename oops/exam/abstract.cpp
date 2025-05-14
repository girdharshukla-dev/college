#include<iostream>

class Animal{
    public:
        virtual void sound(){
            std::cout<<"This animal makes some sound..."<<std::endl;
        }
        virtual void sound2() = 0;
};

class Dog: public Animal{
    public:
        void sound() override{
            std::cout<<"This animal barks ..."<<std::endl;
        }

        void sound2()override{
            std::cout<<"This realy barks 2 too..."<<std::endl;
        }
};

int main(){
    Animal *animal = new Dog();
    animal->sound2();
    return 0;

}