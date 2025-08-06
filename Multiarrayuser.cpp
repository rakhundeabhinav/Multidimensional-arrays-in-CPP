//Abhinav Rakhunde
//PRN:24070123001

#include <iostream>
using namespace std;

int main() {
    int a[3][3];
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    cout << "\nThe 3x3 array is:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
/* OUTPUT:
Enter array elements:
1 2 3 4 5 6 7 8 9

The 3x3 array is:
1       2       3
4       5       6
7       8       9

*/