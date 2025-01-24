#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    int m, n;

    cout << "Введите количество строк матрицы: ";
    cin >> m;
    cout << "Введите количество столбцов матрицы: ";
    cin >> n;

    int matrix[m][n];

    cout << "Введите элементы матрицы:" <<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           cin >> matrix[i][j];
        }
    }
    cout << "Суммы отрицательных чисел в каждом столбце:" <<endl;
    for (int j = 0; j < n; j++) {
        int sum = 0;
        for (int i = 0; i < m; i++) {
            if (matrix[i][j] < 0) {
                sum += matrix[i][j];
            }
        }
       cout << "Сумма в столбце " << j + 1 << ": " << sum <<endl;
    }

    return 0;
}
