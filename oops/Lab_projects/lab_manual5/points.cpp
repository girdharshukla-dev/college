// #include<iostream>
// #include<stdlib.h>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int x , int y): x(x), y(y) {}
        friend double operator+(Point& p1, Point& p2);
        void setx(int x) {this->x = x;}
        int getx() {return this->x;}
        void sety(int y) {this->y = y;}
        int gety() {return this->y;}
        
};

double operator+(Point& p1, Point& p2){
    return sqrt(pow((p1.x-p2.x),2)+pow((p1.y-p2.y),2));
}

int main(){
    Point point1(1,2);
    Point point2(2,3);
    double distance = point1 + point2;
    cout<<"the distance is = "<<distance<<endl;
    return 0;
}