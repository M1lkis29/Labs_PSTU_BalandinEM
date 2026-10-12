#include <iostream>
#include <iomanip>
#include <cmath> // функция pow
using namespace std;

int main(){
    // 1)Выражение для float и для double | Вариант 4
    const float af = 1000.0f;
    const float bf = 0.0001f;

    float sumF = af + bf
    float cf = sumF * sumF * sumF;
    float df = af * af * af;
    float ef = 3.0f * af * bf * bf;
    float ff = bf * bf * bf;
    float gf = 3.0f * af * af * bf;

    float chislitF = cf - df;
    float znamenatF = ef + ff + gf;
    float resultF = chislitF / znamenatF;



    const double a = 1000.0;
    const double b = 0.0001;

    double sumD = a + b
    double c = sumD * sumD * sumD;
    double d = a * a * a;
    double e = 3.0 * a * b * b;
    double f = b * b * b;
    double g = 3.0 * a * a * b;
    double chislitD = c - d;
    double znamenatD = e + f + g;
    double resultD = chislitD / znamenatD;

    cout << "Задание 1. Вариант 4\n" << endl;
    cout << "float : " << setprecision(10) << resultF << endl;
    cout << "double : " << setprecision(10) << resultD << endl; 

    return 0;
}