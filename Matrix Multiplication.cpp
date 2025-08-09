// Abhinav Rakhunde
// PRN: 24070123001

#include <iostream>
using namespace std;

int main()
{
    int m1[10][10], m2[10][10], result[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix 1: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix 2: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "Multiplication not possible." << endl;
        return 0;
    }

    cout << "Enter elements of Matrix 1:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> m1[i][j];
        }
    }
    cout << "Enter elements of Matrix 2:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> m2[i][j];
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    cout << "Result (Matrix Multiplication):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
/* OUTPUT:

Enter rows and columns of Matrix 1: 2 3
Enter rows and columns of Matrix 2: 3 2
Enter elements of Matrix 1:
1  
2
3
4
5
6
Enter elements of Matrix 2:
7
8
9
0
11
2
Result (Matrix Multiplication):
58      14
139     44

*/
