#include <iostream>
#include <windows.h>;
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    const int n = 2;
    const int m = 2; 
    int matrix[n][m]; 
    int k;

    cout << "Введіть число k: ";
    cin >> k;

    cout << "Введіть елементи матриці (2x2):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> matrix[i][j];
        }
    }

    int count = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (matrix[i][j] % k == 0) {
                count++;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i < j) { 
                matrix[i][j] = -matrix[i][j]; 
            }
            else if (i > j) {
                matrix[i][j] *= matrix[i][j]; 
            }
        }
    }

    cout << "Кількість елементів, кратних " << k << ": " << count << endl;
    cout << "Видозмінена матриця:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
