

#include <iostream>
using namespace std;
int main()
{
    
        setlocale(LC_CTYPE, "Russian");
    float a = 10, b = 20, c = 15;
    double p,s;
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площадь" << s << endl;
    system("pouse");
    return 0;
}

