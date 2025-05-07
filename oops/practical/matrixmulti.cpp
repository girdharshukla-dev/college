#include<iostream>
using namespace std;

int main(){
    int matrix1[2][2] = {{1,1},{1,1}};
    int matrix2[2][2] = {{2,2},{2,2}};
    int ans[2][2];

    for(int i = 0;i<2;i++){
        for(int k = 0;k<2;k++){
            int sum = 0;
            for(int j=0;j<2;j++){
                sum+=matrix1[i][j]*matrix2[j][k];
            }
            ans[i][k] = sum;
        }
    }

    for(int i = 0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}