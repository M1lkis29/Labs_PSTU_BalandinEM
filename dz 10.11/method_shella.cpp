#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Введите количество элементов: ";
    cin >> n;

    int a[100];

    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int k = n / 2; k > 0; k = k / 2) {
        for (int i = k; i < n; i++) {
            int temp = a[i];
            int j = i;

            while (j >= k && a[j - k] > temp) {
                a[j] = a[j - k];
                j = j - k;
            }

            a[j] = temp;
        }
    }

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
