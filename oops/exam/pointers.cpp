#include<iostream>

int main(){
    int *a = new int;
    *a = 10;
    int *ptr1 = a;
    int *ptr2 = a;
    delete a;
    std::cout<<*ptr1<<" "<<*ptr2;
    return 0;
}