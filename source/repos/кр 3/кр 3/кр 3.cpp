#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Russian");
    float n=2, s, x = 2;
    for (int i = 2; i < 10.1; i++)
    {

        for(int n=2; n < 4.1;n++)
    {

        s = 1 / (n * x);
        
    }
      x += 2;
      cout << "s=" << s << "\n";
    }
  
    return 0;
}

