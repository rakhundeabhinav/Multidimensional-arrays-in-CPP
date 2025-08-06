//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main()
{
    int MAT[10][10];
    int r1, r2, c1, c2;

    cout << "Enter size of rows and columns: r1 c1 r2 c2" << endl;
    cin >> r1 >> c1 >> r2 >> c2;

    if (r1 == r2 && c1 == c2) {
        int m1[10][10], m2[10][10];

        cout << "ENTER MATRIX 1:" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                cin >> m1[i][j];
            }
        }

        cout << "ENTER MATRIX 2:" << endl;
        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                cin >> m2[i][j];
            }
        }

        cout << "RESULT (MATRIX ADDITION):" << endl;
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                MAT[i][j] = m1[i][j] + m2[i][j];
                cout << MAT[i][j] << "\t";
            }
            cout << endl;
        }
    }
    else {
        cout << "Error: Matrix sizes are not equal. Addition not possible." << endl;
    }

    return 0;
}

/* OUTPUT:

Enter size of rows and columns: r1 c1 r2 c2
2 2 2 2 
ENTER MATRIX 1:
1 2 3 5
ENTER MATRIX 2:
1 5 6 8
RESULT (MATRIX ADDITION):
2       7
9       13

*/