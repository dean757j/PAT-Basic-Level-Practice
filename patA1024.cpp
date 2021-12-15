/*
1024 科学计数法
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s0;
    cin >> s0;
    
    char c = s0[0];
    int index_e = s0.find('E');
    string s1 = s0.substr(1, index_e - 1);
    s1.replace(1, 1, "");
    
    int cnt = stoi(s0.substr(index_e + 1));
    
    if ('-' == c)
        cout << c;
    if (cnt < 0)
    {
        cnt = -cnt;
        cout << "0.";
        for (int i = 0; i < cnt - 1; ++i)
            cout << "0";
        cout << s1;
    }
    else
    {
        int length = s1.length();
        if (cnt >= length - 1)
        {
            cout << s1;
            if (cnt >= length)
            {
                for (int i = 0; i <= cnt - length; ++i)
                    cout << "0";
            }
        }
        else
        {
            s1.insert(cnt + 1, 1, '.');
            cout << s1;
        }
    }
    
    return 0;
}