#include<stdio.h>
#include<iostream>
#include <string>
using namespace std;
int main(){
    string st1;
    cin>>st1;
    string st2;
    cin>>st2;
    int len1 = st1.length()-1;
    int len2 = st2.length()-1;
    int i=0;
    for(int j=0;j<=len2;j++){
        bool check = false;
        while(st1[j]!=st2[i]){
            i++;
        }
    }
}