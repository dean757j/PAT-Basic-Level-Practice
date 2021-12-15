/*
1078 字符串压缩与解压
*/
#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;
    getchar();
    string s;
    getline(cin, s);
    
    int len = s.length();
    if (c == 'D')
    {
        for (int i = 0; i < len; ++i)
        {
            int cnt = 0;
            while (s[i] >= '0' && s[i] <= '9')
            {
                cnt = 10 * cnt + s[i] - '0';
                ++i;
            }
            for (int j = 0; j < cnt; ++j)
                cout << s[i];
            if (0 == cnt)
                cout << s[i];
        }
    }
    else if (c == 'C')
    {
        for (int i = 0; i < len; ++i)
        {
            int cnt = 1;
            while (s[i] == s[i + 1])
            {
                ++cnt;
                ++i;
            }
            if (cnt > 1)
                cout << cnt;
            cout << s[i];
        }
    }
    
    return 0;
}