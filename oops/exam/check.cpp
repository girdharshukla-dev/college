#include <iostream>

class Test
{

public:
    int *ptr;
    Test()
    {
        ptr = new int(10);
    }
    // Test(const Test& test){
    //     ptr = test.ptr;
    //     std::cout<<"inside shallow copy"<<std::endl;
    // }
    Test(const Test &test)
    {
        ptr = new int(*test.ptr);
        std::cout << "Inside deep copy" << std::endl;
    }
};

int main()
{
    Test test;
    Test test1 = test;
    *test1.ptr = 20;
    std::cout<<"the value in original is = "<<*test.ptr<<std::endl;
    return 0;
}