#include<iostream>
using namespace std;

void volume(int side){
    cout<<"square = "<<(side*side*side)<<endl;
}

void volume(int l,int b, int h){
    cout<<"rectangle = "<<(l*b*h)<<endl;
}

void volume(int r, int h){
    cout<<"cylinder = "<<(3.14*r*r*h)<<endl;
}

int main(){

    cout<<"enter s for square, c for cylinder, r for rectangle";
    char ch;
    cin>>ch;
    switch(ch){
        case 's':
        int side;
        cin>>side;
        volume(side);
        break;

        case 'r':
        int l,b,h;
        cin>>l;
        cin>>b;
        cin>>h;
        
        volume(l,b,h);
        break;

        case 'c':
         int r, hi;
         cin>>r;
         cin>>hi;
         volume(r,hi);
         break;
    }
   
    return 0;
}