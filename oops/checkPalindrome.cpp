#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    string st;
    cin>>st;
    int len = st.length();
    len-=1;
    bool check = true;
    for(int i=0;i<=len/2;i++){
        if(st[i]!=st[len-i]) check = false;
    }
    if(check) cout<<"palindrome";
    else cout<<"not palindrome";
    return 0;
}