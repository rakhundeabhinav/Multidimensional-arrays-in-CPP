#include <iostream>
using namespace std;

int main() {
    int A[10][10], n;
    int primarySum = 0, secondarySum = 0;

    cout << "Enter size of matrix (n x n): ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        primarySum += A[i][i];          // Primary diagonal
        secondarySum += A[i][n - 1 - i]; // Secondary diagonal
    }

    cout << "\nMatrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nPrimary diagonal sum: " << primarySum;
    cout << "\nSecondary diagonal sum: " << secondarySum << endl;

    return 0;
}


    return 0;
}


