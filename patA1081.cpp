/*
1081 检查密码
*/
#include <iostream>

using namespace std;

void Judge(string s)
{
    bool flagA = false;
    bool flag1 = false;
    if (s.length() < 6)
        cout << "Your password is tai duan le.";
    else
    {
        for (int i = 0; i < s.length(); ++i)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z' )|| (s[i] >= 'a' && s[i] <= 'z') \
                || s[i] == '.' || (s[i] >= '0' && s[i] <= '9'))
            {
                if ((s[i] >= 'A' && s[i] <= 'Z' )|| (s[i] >= 'a' && s[i] <= 'z'))
                    flagA = true;
                else if (s[i] >= '0' && s[i] <= '9')
                    flag1 = true;
            }
            else
            {
                cout << "Your password is tai luan le.";
                return;
            }
        }
        
        if (flagA && !flag1)
            cout << "Your password needs shu zi.";
        if (!flagA && flag1)
            cout << "Your password needs zi mu.";
        if (flagA && flag1)
            cout << "Your password is wan mei.";
    }
}

int main()
{
    int N;
    cin >> N;
    getchar();
    for (int i = 0; i < N; ++i)
    {
        string s;
        getline(cin, s);
        Judge(s);
        cout << endl;
    }
    
    return 0;
}