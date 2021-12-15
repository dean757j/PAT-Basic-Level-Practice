/*
1051 复数乘法
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double r1, p1, r2, p2;
    cin >> r1 >> p1 >> r2 >> p2;
    double a1, b1, a2, b2;
    double rstA, rstB;
    
    a1 = r1 * cos(p1);
    b1 = r1 * sin(p1);
    a2 = r2 * cos(p2);
    b2 = r2 * sin(p2);
    
    rstA = a1 * a2 - b1 * b2;
    rstB = a1 * b2 + a2 * b1;
    
    if (rstA + 0.005 >= 0 && rstA < 0)
        printf("0.00");
    else
        printf("%.2f", rstA);
    
    if (rstB >= 0)
        printf("+%.2fi", rstB);
    else if (rstB + 0.005 >= 0 && rstB < 0)
        printf("+0.00i");
    else
        printf("%.2fi", rstB);
    
    return 0;
}