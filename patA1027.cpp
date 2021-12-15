/*
1027 打印沙漏
*/
#include <iostream>

using namespace std;

int main()
{
    int num;
    char c;
    cin >> num >> c;
    int n = 1;
    
    while (2 * n * n - 1 <= num)
    {
        ++n;
    }
    --n;
    
    for (int i = n; i > 0; --i)
    {
        for (int j = 0; j < n - i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; ++j)
            cout << c;
        cout << endl;
    }
    
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 0; j < n - i; ++j)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; ++j)
            cout << c;
        cout << endl;
    }
    cout << num - (2 * n * n - 1) << endl;
    
    return 0;
}