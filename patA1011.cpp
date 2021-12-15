/*
1011 A+B 和 C
*/
#include <iostream>

using namespace std;

int main()
{
    int n;
    double a, b, c;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b >> c;
        cout << "Case #" << i << ": ";
        if (a + b > c)
            cout << "true";
        else
            cout << "false";
        cout <<endl;
    }
    
    return 0;
}