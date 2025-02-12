#include<iostream>
using namespace std;
class Copy{
    public: int x;
    Copy(){};

    Copy(Copy& copy){
        x = copy.x*2;
        cout<<"this is inside copy constructor";
    }
};

int main(){
    Copy copy;
    copy.x = 10;
    cout<<"in original object x = "<<copy.x<<endl;

    Copy copy2(copy);
    cout<<"\n in copy contructor"<<copy2.x;
    return 0;

}