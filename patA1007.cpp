/*
1007 素数对猜想
*/
#include <iostream>
#include <math.h>

#define TRUE 1
#define FALSE 0

using namespace std;

bool IsPrime(int num)
{
    if (num == 1)
        return FALSE;
    int k = sqrt(num);
    for (int i = 2; i <= k ; i++)
    {
        if (0 == num % i)
            return FALSE;
    }
    return TRUE;
}

int main()
{
    int num;
    cin >> num;
    int cnt = 0;
    int val = num;
    
    while (val > 3)
    {
        if (IsPrime(val))
        {
            if (IsPrime(val - 2))
                cnt++;
            val -= 2;
        }
        else
            val--;
    }
    cout << cnt;
    
    return 0;
}