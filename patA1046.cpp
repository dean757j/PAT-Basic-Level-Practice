/*
1046 划拳
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int a0, a1, b0, b1, sum;
    int a = 0, b = 0;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> a0 >> a1 >> b0 >> b1;
        sum = a0 + b0;
        if ((a1 == sum && b1 ==sum) || (a1 != sum && b1 != sum))
            continue;
        if (a1 == sum)
            ++b;
        else if (b1 == sum)
            ++a;
    }
    cout << a << " " << b;
    
    return 0;
}