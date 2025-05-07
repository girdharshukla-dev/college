#include<iostream>
using namespace std;

class Matrix{
    int** matrix;
    int row,col;
    public:
        Matrix(){
            matrix = nullptr;
        }
        Matrix(int row, int col) {
            this->row = row;
            this->col = col;

            matrix = new int*[row];
            for(int i=0;i<row;i++){
                matrix[i] = new int[col];
            }
        }

        void input(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cin>>matrix[i][j];
                }
            }
        }

        void display(){
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }

        friend Matrix operator*(Matrix& mat1, Matrix& mat2);
};

Matrix operator*(Matrix& mat1, Matrix& mat2){
    if(mat1.col != mat2.row){
        return Matrix();
    }
    Matrix ans(mat1.row, mat2.col);

    for(int i=0;i<mat1.row;i++){
        for(int k=0;k<mat2.col;k++){
            int sum = 0;
            for(int j=0;j<mat1.col ; j++){
                sum+=mat1.matrix[i][j]*mat2.matrix[j][k];
            }
            ans.matrix[i][k] = sum;
        }
    }
    return ans;
}

int main(){
    Matrix mat1(1,2);
    Matrix mat2(2,3);

    cout<<"Input in mat1";
    mat1.input();
    cout<<"Input in mat2";
    mat2.input();

    cout<<"Mat1"<<endl;
    mat1.display();
    cout<<"Mat2"<<endl;
    mat2.display();

    Matrix result = mat1*mat2;
    cout<<"Result "<<endl;
    result.display();

    return 0;
}