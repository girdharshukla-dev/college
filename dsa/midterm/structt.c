#include<stdio.h>
#include<stdlib.h>
typedef struct {
    int age;
    char name[10];
} Student;

int main(){
    Student std1;
    std1.age = 11;
    Student* std2 = (Student*)malloc(sizeof(Student*));
    std2->age = 22;
    printf("%d",std2->age);
}