#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //2 Задание 1)n++ *m  2)n++ <m  3)m-- >m
    int n, m;
    
    cout << "Ввести n и m: ";
    cin >> n >> m;

    //1)
    int n1 = n;
    cout << "n++ * m = " << n1++ * m << endl;
    cout << "n после выражения = " << n1 << endl;

    //2)
    int n2 = n;
    cout << "n++ < m = " << (n2++ < m) << endl;
    cout << "n после выражения = " << n2 << endl;

    //3)
    int m1 = m;
    m1--;
    cout << "m после уменьшения = " << m1 << endl;
    cout << "Сравнение старого m с уменьшенным m: " << (m > m1) << endl;

    return 0;
}