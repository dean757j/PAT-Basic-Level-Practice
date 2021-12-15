/*
1001 害死人不偿命的(3n+1)猜想
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int  i = 0;
    
    while (num != 1)
    {
        if (num % 2 == 0)
            num /= 2;
        else
            num = (3 * num + 1) / 2;
        i++;
    }
    cout << i;
    return 0;
}