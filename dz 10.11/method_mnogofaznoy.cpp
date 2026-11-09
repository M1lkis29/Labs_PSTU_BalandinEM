#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите количество элементов: ";
    cin >> n;

    int a[100], b[100], c[100];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Распределение элементов по двум массивам
    int k = 0;
    int m = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            b[k] = a[i];
            k++;
        }
        else {
            c[m] = a[i];
            m++;
        }
    }

    // Сортировка слиянием двух массивов
    int i = 0;
    int j = 0;
    int p = 0;

    while (i < k && j < m) {
        if (b[i] < c[j]) {
            a[p] = b[i];
            i++;
        }
        else {
            a[p] = c[j];
            j++;
        }
        p++;
    }

    while (i < k) {
        a[p] = b[i];
        i++;
        p++;
    }

    while (j < m) {
        a[p] = c[j];
        j++;
        p++;
    }

    cout << "Результат: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
