#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        /* code */ if (a > b)
        {
            a -= b;
        }
        else
            b -= a;
    }

    return a;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout << "greatest common factor GCD of " << a << " and " << b << " is " << gcd(a, b);
}