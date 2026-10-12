#include <iostream>
using namespace std;

int main(){
    int n = 6;
    int m = 7;

    cout << "Результат 1 :" << n++*m << endl;
    cout << "Результат 2 :" << n++<m << endl;
    cout << "Результат 3 :" << m-- >m << endl;
    return 0;
}