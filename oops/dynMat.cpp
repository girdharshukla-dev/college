#include <iostream>
#include <stdlib.h>
using namespace std;

class Matrix{
private:
    int rows, cols;
    int **data;

public:
    Matrix(int rows, int cols)
    {
        this->rows = rows;
        this->cols = cols;
        data = new int *[rows];
        for (int i = 0; i < rows; i++)
        {
            data[i] = new int[cols];
        }
    }
    void input()
    {
        cout << "enter the elements" << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cin >> data[i][j];
            }
        }
    }

    void display(){
        cout << "the elements are " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout<<data[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int rows, cols;
    cout << "enter number of rows" << endl;
    cin >> rows;
    cout << "enter number of cols" << endl;
    cin >> cols;

    Matrix matrix(rows, cols);
    matrix.input();
    matrix.display();
    return 0;
}