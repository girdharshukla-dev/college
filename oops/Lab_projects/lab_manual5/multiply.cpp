#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix{
    int **matrix;
    int row,col;
    public: 
        Matrix(int x, int y){
            this->row = x;
            this->col = y;
            matrix = new int*[row];
            for(int i=0;i<row;i++){
                matrix[i] = new int[col]; 
            }
        }
        
        friend Matrix operator*(Matrix& mat1, Matrix& mat2);

        void display(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void input(){
            cout<<"Enter elements "<<endl;
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cin>>matrix[i][j];
                }
            }
        }
};

Matrix operator*(Matrix& mat1, Matrix& mat2){
    if(mat1.col != mat2.row) return Matrix(NULL,NULL);
    Matrix ans(mat1.row, mat2.col);
    int k;
    for(int i=0;i<mat1.row;i++){
        for(int j=0;j<mat2.col;j++){
            int sum = 0;
            for(k=0;k<mat1.col;k++){
                sum+=mat1.matrix[i][k]*mat2.matrix[k][j];
            }
            ans.matrix[i][j] = sum;
        }
    }

    return ans;
}

int main(){
    Matrix mat1(2,2);
    Matrix mat2(2,2);
    mat1.input();
    mat2.input();
    Matrix ans = mat1*mat2;
    ans.display();
    return 0;
}
