//perform addition of matrices
#include<stdio.h>

void add(int arr1[][1000], int arr2[][1000], int sum[][1000], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
}

int main(){
    int m,n;
    printf("enter number of rows and columns");
    scanf("%d",&m);
    scanf("%d",&n);
    int arr1[m][1000];
    int arr2[m][1000];
    int sum[m][1000];
    printf("enter elements of first matrix");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("enter elements of second matrix");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }    

    add(arr1,arr2,sum,m,n);

    printf("the sum matrix is \n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}

