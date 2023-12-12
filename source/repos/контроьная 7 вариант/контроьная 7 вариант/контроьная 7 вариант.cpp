// контроьная 7 вариант.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    double x = 0.1, j = 12, y = 5, s, t;
    s = (0.4 * x - 1) / j * tan(y);
    t = s - sin(s);
    std::cout << "s=" << s;
    std::cout << "\nt" << t;
}
  
