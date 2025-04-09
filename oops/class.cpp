#include<iostream>
using namespace std;

class Student{
    protected: int rollNo;
    public:
        void getNo(int a){
            rollNo = a;
        }
        void putNo(){
            cout<<"Roll No. = "<<rollNo<<endl;
        }
};

class Test: public Student{
    protected: float part1,part2;
    public:
        void getMarks(float x, float y){
            part1 = x;
            part2 = y;
        }
        void putMarks(){
            cout<<"Marks: part1 = "<<part1<<endl;
            cout<<"Marks: part2 = "<<part2<<endl;
        }
};

class Sports{
    protected: float score;
    public:
        void getScore(float a){
            score = a;
        }
        void putScore(){
            cout<<"Score = "<<score<<endl;
        }
};

class Result: public Test, public Sports{
    float total;
    public:
        int getTotal(){
            return this->total;
        }
        void display(){
            total = part1+part2+score;
            putMarks();
            putScore();
            cout<<"Total Score = "<<total<<endl;
        }
};

int main(){
    Result s1;
    s1.getNo(1234);
    s1.getMarks(675,330);
    s1.getScore(4);
    s1.display();
    int num = s1.getTotal();
    char grade;

    if(num<500){
        grade = 'E';
    }
    else if(num<600){
        grade = 'D';
    }
    else if(num<700){
        grade = 'C';
    }
    else if(num<800){
        grade = 'B';
    }
    else{
        grade = 'A';
    }

    cout<<"Grade is : "<<grade<<endl;

    return 0;
}