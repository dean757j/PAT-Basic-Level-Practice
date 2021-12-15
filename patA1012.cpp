/*
1012 数字分类
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    int a1, a2, a3, a5;
    a1 = a2 = a3 = a5 = 0;
    double a4 = 0.0;
    int a2Flag = 0;
    int a4Flag = 0;
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (0 == a % 5 && 0 == a % 2)
            a1 += a;
        if (1 == a % 5)
        {
            if (0 != a2Flag % 2)
                a *= -1;
            a2 += a;
            a2Flag++;
        }
        if (2 == a % 5)
            a3++;
        if (3 == a % 5)
        {
            a4 += a;
            a4Flag++;
        }
        if (4 == a % 5)
        {
            if (a > a5)
                a5 = a;
        }
    }

    if (0 == a1)
        cout << "N";
    else
        cout << a1;
    if (0 == a2Flag)
        cout << " " << "N";
    else
        cout << " " << a2;
    if (0 == a3)
        cout << " " << "N";
    else
        cout << " " << a3;
    if (0 == a4)
        cout << " " << "N";
    else
    {
        cout << " " << setprecision(1) << fixed << a4 / a4Flag;
    }
    if (0 == a5)
        cout << " " << "N";
    else
        cout << " " << a5;
    
    return 0;
}