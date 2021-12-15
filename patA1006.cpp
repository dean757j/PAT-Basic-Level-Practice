/*
1006 换个格式输出整数
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    int bit0 = 0;
    int bit1 = 0;
    int bit2 = 0;
    cin >> num;
    
    bit0 = num % 10;
    num /= 10;
    if (num > 0)
        bit1 = num % 10;
    num /= 10;
    if (num > 0)
        bit2 = num % 10;
    
    int i;
    if (0 != bit2)
    {
        for (i = 0; i < bit2; i++)
            cout << "B";
    }
    if (0 != bit1)
    {
        for (i = 0; i < bit1; i++)
            cout <<"S";
    }
    if (0 != bit0)
    {
        for (i = 1; i <= bit0; i++)
            cout << i;
    }
    
    return 0;
}