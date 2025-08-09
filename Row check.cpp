//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int matrix[10][10];
    int r,c,r1,r2;
    bool equal = true;

    cout << "Enter number of rows and columns: ";
    cin >> r>> c;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter two row numbers to compare (0-indexed): ";
    cin >> r1 >> r2;

    if (r1 >= r || r2 >= r || r1 < 0 || r2 < 0) {
        cout << "Invalid row numbers" << endl;
        return 0;
    }
    for (int j = 0; j < c; j++) {
        if (matrix[r1][j] != matrix[r2][j]) {
            equal = false;
            break;
        }
    }

    if (equal)
        cout << "Row " << r1 << " and Row " << r2 << " are identical." << endl;
    else
        cout << "Row " << r1 << " and Row " << r2 << " are different." << endl;

    return 0;
}
/* OUTPUT:
Enter number of rows and columns: 3 3
Enter matrix elements:
1
2
3
4
5
6
7
8
9
Enter two row numbers to compare (0-indexed): 0
1
Row 0 and Row 1 are different.
*/
