#include<iostream>
using namespace std;

class Student{
    private: int rollno; string name;
    public: 
        void setStudent(int roll, string nam){
            rollno = rollno;
            name = nam;
        }
        void displayStudent(){
            cout<<"Name = "<<name <<" Rollno = "<<rollno<<endl;
        }
};

class Marks : public Student{
    private: int sub1,sub2;
    public: 
        void setMarks(int n1, int n2){
            sub1 = n1;
            sub2 = n2;
        }
        int getSub1(){ return sub1; }
        int getSub2(){ return sub2; }
};

class Result : public Marks{
    private: int total; char grade;

    public:
        void calcResult(){
            total = getSub1()+getSub2();
            if(total>90) grade = 'A';
            else if(total>80) grade = 'B';
            else if(total>70) grade = 'C';
            else if(total>50) grade = 'D';
            else grade = 'E';
        }
        void displayResult(){
            Student::displayStudent();
            cout<<"Total Marks = "<<total<<" Grade= "<<grade<<endl;
        }
};

int main(){
    Result r;
    r.setStudent(14,"Girdhar Shukla");
    r.setMarks(99,97);
    r.calcResult();
    r.displayResult();
    return 0;
}