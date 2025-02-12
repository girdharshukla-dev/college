#include<iostream>
class Shape{
    public : virtual void draw() = 0;
};
class Rectangle: Shape{
    public : void draw(){
        std::cout<<"inside rectangle draw";
    }
};

int main(){
    Rectangle obj;
    obj.draw();
    return 0;
}