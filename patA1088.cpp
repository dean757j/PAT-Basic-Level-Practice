/*
1088 三人行
*/
#include <iostream>

using namespace std;

int M, X, Y;

void Print(double num)
{
    if (num == M)
        printf(" Ping");
    else if (num > M)
        printf(" Cong");
    else
        printf(" Gai");
}

int main()
{
    scanf("%d%d%d", &M, &X, &Y);
    for (int i = 99; i >= 10; --i)
    {
        int j = i % 10 * 10 + i / 10;
        double k = abs(i - j) * 1.0 / X;
        if (j == Y * k)
        {
            cout << i;
            Print(i);
            Print(j);
            Print(k);
            return 0;
        }
    }
    printf("No Solution");
    
    return 0;
}