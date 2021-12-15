/*
1044 火星数字
*/
#include <iostream>
#include <string>

using namespace std;

string a[13] = {"tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"****", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};

void ToStr(int num)
{
    if (num / 13)
        cout << b[num / 13];
    if (num / 13 && num % 13)
        cout << " ";
    if (num % 13 || num == 0)
        cout << a[num % 13];
}

void ToNum(string s)
{
    string s1, s2;
    int t1 = 0, t2 = 0;
    
    s1 = s.substr(0, 3);
    if (s.length() > 4)
        s2 = s.substr(4, 3);
    for (int i = 1; i < 13; ++i)
    {
        if (b[i] == s1)
            t1 = i;
        if (a[i] == s1 || a[i] == s2)
            t2 = i;
    }
    cout << 13 * t1 + t2;
}

int main()
{
    int N;
    cin >> N;
    getchar();
    
    string s0;
    for (int i = 0; i < N; ++i)
    {
        getline(cin, s0);
        if (s0[0] >= '0' && s0[0] <= '9')
            ToStr(stoi(s0));
        else
            ToNum(s0);
        cout << endl;
    }
    
    return 0;
}