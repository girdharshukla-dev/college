#include<iostream>
#include<memory>

class Test{
    int x = 42;
    public : 
    Test(){
        std::cout<<"Test object created"<<std::endl;
    }
    ~Test(){
        std::cout<<"Test object deleted"<<std::endl;
    }
    void display(){
        std::cout<<"This is the display function and x = "<<x<<std::endl;
    }
};

int main(){
    std::shared_ptr<Test> ptr = std::make_shared<Test>();
    ptr->display();
    {
        std::shared_ptr<Test> ptr2 = ptr;
        std::cout<<"Count is "<<ptr.use_count()<<std::endl;
    }
    std::cout<<"Now count outside is "<<ptr.use_count()<<std::endl;
    ptr.reset();
    ptr->display(); //this will give a seg fault here
    return 0;
}