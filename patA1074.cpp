/*
1074 宇宙无敌加法器
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s0, s1, s2;
    cin >> s0 >> s1 >> s2;
    
    string rst = s0;
    string ss1(s0.length() - s1.length(), '0');
    s1 = ss1 + s1;
    string ss2(s0.length() - s2.length(), '0');
    s2 = ss2 + s2;
    
    int carry = 0, flag = 0;
    int mod;
    for (int i = s0.length() - 1; i >= 0; --i)
    {
        mod = s0[i] == '0' ? 10 : (s0[i] - '0');
        rst[i] = (s1[i] - '0' + s2[i] - '0' + carry) % mod + '0';
        carry = (s1[i] - '0' + s2[i] - '0' + carry) / mod;
    }

    if (0 != carry)
        rst = '1' + rst;
    
    for (int i = 0; i < rst.length(); ++i)
    {
        if (rst[i] != '0' || 1 == flag)
        {
            flag = 1;
            cout << rst[i];
        }
    }
    
    if (0 ==flag)
        cout << 0;
    
    return 0;
}