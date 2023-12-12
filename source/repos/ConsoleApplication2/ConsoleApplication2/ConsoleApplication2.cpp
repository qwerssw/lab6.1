// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
int main()
{
    double a = 1.5, x = -1.8, z = 15e-9, w, d;
    w = tan(1) * (1 + x) + z - exp(a);
    d = 9 * sqrt(2 - 3 * x) + (fabs(a + 1));
    std::cout << "w=" << w;
    std::cout << "\nd=" << d;
}
