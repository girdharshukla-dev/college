#include<iostream>
using namespace std;

class Calling{
    int length;
    int breadth;
    int height;
    int volume;

    public: 
      void inputs(int l, int b, int h){
        this->length = l;
        this->breadth = b;
        this->height = h;
      }

    public:
      void volumeC(){
        this->volume = (this->length)*(this->breadth)*(this->height);
      }
    
    public:
       void area(int l, int b, int h){
          cout<<"the area is "<<2*(l*b + b*h + l*h);
       }

    public: 
        void display(){
            cout<<"the lenght is "<<this->length;
            cout<<"the breadth is "<<this->breadth;
            cout<<"the height id "<<this->height;
            cout<<"the volume is "<<this->volume;
        }
};

int main(){
    
    Calling* calling = new Calling();
    int l,b,h;
    cout<<"enter length "<<endl;
    cin>>l;
    cout<<"enter breadth "<<endl;
    cin>>b;
    cout<<"enter height "<<endl;
    cin>>h;
    
    Calling& callingRef = *calling;
    callingRef.inputs(l,b,h);
    cout<<"\n";
    callingRef.volumeC();
    cout<<"\n";
    callingRef.display();
    cout<<"\n";


    calling->area(l,b,h);
    return 0;

}
