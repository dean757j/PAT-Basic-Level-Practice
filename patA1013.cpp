/*
1013 数素数
*/
#include <iostream>
#include <math.h>

using namespace std;

bool IsPrime(int num)
{
    if (num <= 1)
        return false;
    int k = sqrt(num);
    for (int i = 2; i <= k; i++)
    {
        if (0 == num % i)
            return false;
    }
    return true;
}

int main()
{
    int low, high;
    cin >> low >> high;
    int cnt = high - low + 1;
    int flag = 0;
    int begin = 2;
    
    while (cnt)
    {
        if (IsPrime(begin))
        {
            flag++;
            if (flag >= low && flag <= high)
            {
                if (low != flag)
                {
                    if (0 == (flag - low) % 10)
                        cout << endl;
                    else
                        cout <<" ";
                }
                cout << begin;
                cnt--;
            }
        }
        begin++;
    }
    
    return 0;
}