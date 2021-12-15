/*
1010 一元多项式求导
*/
#include <iostream>

using namespace std;

int main()
{
    int i, j;
    
    cin >> i >> j;
    if (0 == j)
        cout << "0 0";
    else
        cout << i * j << " " << j - 1;
    
    while (cin >> i >> j)
    {
        if (0 != j)
            cout << " " << i * j << " " << j - 1;
    }
    
    return 0;
}