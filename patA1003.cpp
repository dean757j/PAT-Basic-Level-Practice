/*
1003 我要通过！
*/
#include <iostream>
#include <string>

using namespace std;
#define NUM 10

void test(string s)
{
    int pnum, tnum, anum;
    int p, t;
    int flag = 1;
    pnum = tnum = anum = 0;
    p = t = 0;
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == 'P')
        {
            pnum++;
            p = i;
        }
        else if (s[i] == 'T')
        {
            tnum++;
            t = i;
        }
        else if (s[i] == 'A')
            anum++;
        else
        {
            flag = 0;
            break;
        }
    }
    if (pnum == 1 && tnum == 1 && anum != 0 && flag != 0)
    {
        if (p * (t - p - 1) == s.length() - t - 1 && t - p > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
}

int main()
{
    int n;
    int i;
    string Tstr[10];
    
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> Tstr[i];
    for (i = 0; i < n; i++)
        test(Tstr[i]);
    
    return 0;
}