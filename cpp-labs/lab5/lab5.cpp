#include <iostream>
using namespace std;

// Функция для вывода двумерного массива
void printMatrix(int a[10][10], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

// Функция для удаления строки из массива
void deleteRow(int a[10][10], int &n, int m, int row)
{
    // Сдвигаем строки выше, расположенные ниже удаляемой
    for (int i = row - 1; i < n - 1; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = a[i + 1][j];
        }
    }

    n--;

    // Заполняем освободившуюся последнюю строку 0
    for (int j = 0; j < m; j++)
    {
        a[n][j] = 0;
    }
}

int main()
{
    int a[10][10];
    int n, m;
    int A, B;
    int originalN;

    // Заполняем весь массив нулями
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            a[i][j] = 0;
        }
    }

    cout << "Введите количество строк (1-10): ";
    cin >> n;
    cout << "Введите количество столбцов (1-10): ";
    cin >> m;

    if (n < 1 || n > 10 || m < 1 || m > 10)
    {
        cout << "Неверный размер массива";
        return 0;
    }

    originalN = n;

    cout << endl;
    cout << "Введите элементы массива:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << endl;
    cout << "Исходный массив:" << endl;
    printMatrix(a, n, m);

    cout << endl;
    cout << "Введите A и B (номера строк от 1 до " << n << "): ";
    cin >> A >> B;

    if (A < 1 || B < A || B > n)
    {
        cout << "Неверно указаны номера строк";
        return 0;
    }

    // Удаляем строки с номерами от A до B включительно
    int count = B - A + 1;
    for (int i = 0; i < count; i++)
    {
        deleteRow(a, n, m, A);
    }

    cout << endl;
    cout << "Массив после удаления строк:" << endl;
    printMatrix(a, originalN, m);

    return 0;
}