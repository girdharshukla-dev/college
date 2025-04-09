#include<iostream>
#include<stdlib.h>
using namespace std;

class Matrix{
    int **matrix = nullptr;
    int row,col;
    public: 
        Matrix() {}
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
            if(matrix==nullptr){
                cout<<"multiplication not possible "<<endl;
                return;
            }
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
    if(mat1.col != mat2.row) return Matrix();
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
    int rows1,cols1;
    int rows2,cols2;
    cout<<"enter number of rows and columns in matrix 1 "<<endl;
    cin>>rows1;
    cin>>cols1;
    Matrix mat1(rows1,cols1);
    mat1.input();

    cout<<"Enter number of rows and columns in matrix 2"<<endl;
    cin>>rows2;
    cin>>cols2;
    Matrix mat2(rows2,cols2);
    mat2.input();

    Matrix ans = mat1*mat2;
    ans.display();
    return 0;
}