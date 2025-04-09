#include <iostream>
using namespace std;

class Shape
{
    private:
    int l, b, h, s, r;

    public : 
     void setL(int l){
        this->l = l;
     }
     int getL(){
        return this->l;
     }

     void setS(int s){
        this->s = s;
     }
     int getS(){
        return this->s;
     }

     void setR(int r){
        this->r = r;
     }
     int getR(){
        return this->r;
     }

     void setH(int h){
        this->h = h;
     }
     int getH(){
        return this->h;
     }

     void setB(int b){
        this->b = b;
     }
     int getB(){
        return this->b;
     }

public:
    void volume(int side)
    {

        cout << "square = " << (side * side * side) << endl;
    }

    void volume(int l,  int b, int h)
    {
        cout << "rectangle = " << (l * b * h) << endl;
    }

    void volume(int r, int h)
    {
        cout << "cylinder = " << (3.14 * r * r * h) << endl;
    }
};


int main(){
    Shape ob;
    cout<<"enter s for square, c for cylinder, r for rectangle";
    char ch;
    cin>>ch;
    switch(ch){
        case 's':
        int side;
        cin>>side;
        ob.setS(side);
        ob.volume(ob.getS());
        break;

        case 'r':
        int l,b,h;
        cin>>l;
        cin>>b;
        cin>>h;
        ob.setB(b);
        ob.setH(h);
        ob.setL(l);
        ob.volume(ob.getL(),ob.getB(),ob.getH());
        break;

        case 'c':
         int r, hi;
         cin>>r;
         cin>>hi;
         ob.setR(r);
         ob.setH(hi);
         ob.volume(ob.getR(),ob.getH());
         break;
    }
}