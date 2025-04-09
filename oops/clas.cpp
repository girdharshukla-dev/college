#include<iostream>
using namespace std;

class Opera{
    public : string s1,str;
    Opera operator+(Opera& obj){
        Opera temp ;
        temp.str = s1+obj.s1;
        return temp;
    }

};

int main(){
    string s1 = "Girdhar ";
    string s2 = "Shukla";
    string st;
    Opera ob1;
    ob1.s1 = s1;
    Opera ob2;
    ob2.s1 = s2;
    Opera obj;
    obj = ob1+ob2;
    cout<<obj.str;
    return 0;
}
