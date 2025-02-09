#include<stdio.h>
#include <iostream>
using namespace std;
int main(){
    // cout<<"hello world";
    // return 0;

    int arr1[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int arr2[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    
    int sum[3][3];
    int product[3][3];
    int k=0;
    for(int i=0;i<3;i++){
        k=0;
        //for sum
        for(int j=0;j<3;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
        //for product
        for(int x=0;x<3;x++){
            int add=0;
            for(int a=0;a<3;a++){
            add+=(arr1[i][a])*(arr2[a][k]); 
            }
          product[i][k]=add;
          k++;
        }
    }
    
    cout<<"product is \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<product[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"sum is \n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<"\n";
    }
        
    return 0;
}