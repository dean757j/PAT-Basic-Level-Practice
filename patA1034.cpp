/*
1034 有理数四则运算
*/
#include <iostream>

using namespace std;

long long gcd(long long x, long long y)
{
    long long tmp;
    while (0 != y)
    {
        tmp = x % y;
        x = y;
        y = tmp;
    }
    return x;
}

void numPrint(long long a, long long b)
{
    if (0 == a)
        cout << 0;
    else if (a > 0)
    {
        long long tmp = gcd(a, b);
        a = a / tmp;
        b = b / tmp;
        if (a >= b)
        {
            if (0 == a % b)
                cout << a / b;
            else
                cout << a / b << " " << a % b << "/" << b;
        }
        else
            cout << a << "/" << b;
    }
    else
    {
        cout << "(-";
        a = -a;
        long long tmp = gcd(a, b);
        a = a / tmp;
        b = b / tmp;
        if (a >= b)
        {
            if (0 == a % b)
                cout << a / b;
            else
                cout << a / b << " " << a % b << "/" << b;
        }
        else
            cout << a << "/" << b;
        cout << ")";
    }
}

int main()
{
    long long a1, b1, a2, b2;
    scanf("%lld/%lld %lld/%lld", &a1, &b1, &a2, &b2);
    
    numPrint(a1, b1);
    cout << " " << "+" << " ";
    numPrint(a2, b2);
    cout << " " << "=" << " ";
    numPrint(a1 * b2 + a2 * b1, b1 * b2);
    cout << endl;
    
    numPrint(a1, b1);
    cout << " " << "-" << " ";
    numPrint(a2, b2);
    cout << " " << "=" << " ";
    numPrint(a1 * b2 - a2 * b1, b1 * b2);
    cout << endl;
    
    numPrint(a1, b1);
    cout << " " << "*" << " ";
    numPrint(a2, b2);
    cout << " " << "=" << " ";
    numPrint(a1 * a2, b1 * b2);
    cout << endl;
    
    numPrint(a1, b1);
    cout << " " << "/" << " ";
    numPrint(a2, b2);
    cout << " " << "=" << " ";
    if (0 == a2)
        cout <<"Inf";
    else
    {
        if (a2 < 0)
        {
            a2 = -a2;
            b2 = -b2;
        }
        numPrint(a1 * b2, b1 * a2);
    }
    cout << endl;
    
    return 0;
}