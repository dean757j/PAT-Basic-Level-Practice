/*
1022 D进制的A+B
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    
    a += b;
    vector<int> rst;
    if (0 == a)
        cout << 0;
    else
    {
        while (0 != a)
        {
            rst.push_back(a % d);
            a /= d;
        }
    }
    
    for (int i = rst.size() - 1; i >= 0; --i)
    {
        if (0 == rst[rst.size() - 1]);
        else
            cout << rst[i];
    }
    
    return 0;
}