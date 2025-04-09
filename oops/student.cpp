#include<iostream>
using namespace std;

class Student{
    string name;
    int roll;
    Marks marks;
    Grade grade;
    public: 
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setRoll(int rolln){
            this->roll = rolln;
        } 
        int getRoll(){
            return this->roll;
        }

        void setMarks(Marks& mar){
            this->marks = mar;
        }
        void get

    
};

class Marks{
    int maths;
    int english;
    int science;
    public:
        void input(){
            cin>>maths;
            cin>>english;
            cin>>science;
        }
        int total(){
            return maths+english+science;
        }
};

