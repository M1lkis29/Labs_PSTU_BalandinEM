#include <iostream>
#include <iomanip>
#include <cmath> // функция pow
using namespace std;

int main(){
    // 1)Выражение для float и для double | Вариант 4
    const float af = 1000.0f;
    const float bf = 0.0001f;

    float cf = pow(af + bf, 3);
    float df = pow(af, 3);
    float ef = 3 * af * bf * bf;
    float ff = pow(bf, 3);
    float gf = 3 * af * af * bf;
    float chislitF = cf - df;
    float znamenatF = ef + ff + gf;
    float resultF = chislitF / znamenatF;



    const double a = 1000.0;
    const double b = 0.0001;

    double c = pow(a + b, 3);
    double d = pow(a, 3);
    double e = 3 * a * b * b;
    double f = pow(b, 3);
    double g = 3 * a * a * b;
    double chislitD = c - d;
    double znamenatD = e + f + g;
    double resultD = chislitD / znamenatD;


    cout << fixed << setprecision(12);
    cout << "Задание 1. Вариант 4\n";
    cout << "a = 1000, b = 0.0001\n\n";
    cout << "float:  числитель = " << chislitF
         << ", знаменатель = " << znamenatF
         << ", результат = " << resultF << '\n';
    cout << "double: числитель = " << chislitD
         << ", знаменатель = " << znamenatD
         << ", результат = " << resultD << "\n\n";

    return 0;
}