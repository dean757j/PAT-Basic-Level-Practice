/*
1016 部分A+B
*/
#include <iostream>

using namespace std;

int main()
{
    string a, b;
    char da, db;
    cin >> a >> da >> b >> db;
    int pa, pb;
    pa = 0;
    pb = 0;
    
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == da)
        {
            pa = 10 * pa;
            pa += da - '0';
        }
    }
    
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] == db)
        {
            pb = 10 * pb;
            pb += db - '0';
        }
    }
    
    cout << pa + pb;
    
    return 0;
}