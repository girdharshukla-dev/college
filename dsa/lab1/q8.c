#include<stdio.h>
#include<math.h>
void circle();
void triangle();
void rectangle();
void square();

int main(){
    printf("enter 1 for square , 2 for rectangle, 3 for triangle, 4 for circle");
    int n;
    scanf("%d",&n);
    if(n==1) square();
    else if(n==2) rectangle();
    else if(n==3) triangle();
    else if(n==4) circle();
    return 0;
}

void square(){
    printf("enter side ");
    int s;
    scanf("%d",&s);
    printf("area = %d\n",(s*s));
    printf("perimeter = %d\n",(s*s));
}

void rectangle(){
    printf("enter length ");
    int l,b;
    scanf("%d",&l);
    printf("enter breadth ");
    scanf("%d",&b);
     printf("area = %d\n",(l*b));
    printf("perimeter = %d\n",(l+l+b+b));

}

void circle(){
    int r;
    printf("enter radius ");
    scanf("%d",&r);
     printf("area = %f\n",(3.14 * r *r));
    printf("perimeter = %f\n",(2 * 3.14 *r));
}
void triangle(){
    int s;
    printf("enter side ");
    scanf("%d",&s);
     printf("area = %f\n",(sqrt(3) * s *s/4));
    printf("perimeter = %f\n",(3*s));
}
