#include<stdio.h>
void multiply(int arr1[][1000], int arr2[][1000], int r1, int col, int r2, int product[][1000]){
   int k=0;
   for(int i=0;i<r1;i++){
        k=0;
        int add=0;
        for(int x=0;x<col;x++){
            add+=arr1[i][x]+arr2[k][x];
        }
        product[i][k]=add;
    }
}

int main(){
    int row1,col,row2;
    printf("enter number if rows in first array");
    scanf("%d",&row1);
    printf("enter number if column in first array or rows of second array");
    scanf("%d",&col);
    printf("enter number if column in second array");
    scanf("%d",&row2);
    int arr1[row1][1000];
    int arr2[col][1000];
    int product[row1][row2];
    
    printf("enter elements of first matrix");
    for(int i=0;i<row1;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&arr1[i][j]);
        }
    }    

    printf("enter elements of second matrix");
    for(int i=0;i<col;i++){
        for(int j=0;j<row2;j++){
            scanf("%d",&arr2[i][j]);
        }
    }    

    multiply(arr1,arr2,row1,col,row2,product);

     printf("the product matrix is \n");
    for(int i=0;i<row1;i++){
        for(int j=0;j<row2;j++){
            printf("%d",product[i][j]);
        }
        printf("\n");
    }
    return 0;
}