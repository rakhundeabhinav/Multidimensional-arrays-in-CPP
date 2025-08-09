//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int A[10][10], transpose[10][10];
    int r, c;

    cout << "Enter number of rows and columns: ";
    cin >> r >> c;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            transpose[j][i] = A[i][j];
        }
    }
    cout << "\nOriginal Matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

/* OUTPUT:

Enter number of rows and columns: 2 3
Enter matrix elements:
1  
1
2
3
4
5

Original Matrix:
1 1 2
3 4 5

Transpose of Matrix:
1 3
1 4
2 5

*/
