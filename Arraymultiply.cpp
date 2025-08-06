#include <iostream>
using namespace std;

int main() {
    int r1,c1,r2,c2;
    cout << "Enter number of rows for first matrix: ";
    cin >> r1;
    cout << "Enter number of columns for first matrix: ";
    cin >> c1;
    cout << "\nEnter number of rows for second matrix: ";
    cin >> r2;
    cout << "Enter number of columns for second matrix: ";
    cin >> c2;
    if (c1=r2) {
        cout << "\n Multiplication is possible.\n";

        int mat1[10][10], mat2[10][10], multiply[10][10];
        cout << "\nEnter elements of first matrix:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cout << "mat1[" << i << "][" << j << "]: ";
                cin >> mat1[i][j];
            }
        }
        cout << "\nEnter elements of second matrix:" << endl;
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cout << "mat2[" << i << "][" << j << "]: ";
                cin >> mat2[i][j];
            }
        }
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                multiply[i][j] = mat1[i][j] * mat2[i][j];
            }
        }
        cout << "\nProduct of the two matrices:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                cout << multiply[i][j] << "\t";
            }
            cout << endl;
        }

    } else {
        cout << "\nMultiplication not possible" << endl;
    }

    return 0;
}