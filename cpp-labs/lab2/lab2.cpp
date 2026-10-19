#include <iostream>

int main(){
    int sum = 0;

    for (int i = 21; i < 100; i += 3){
        sum += i;
    }

    cout << "Результат" << sum << endl;
}