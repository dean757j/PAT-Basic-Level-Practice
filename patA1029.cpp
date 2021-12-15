/*
1029 旧键盘
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    bool sFlag[128] = {false};
    
    for (int i = 0; i < s1.length(); ++i)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
            s1[i] -= 32;
    }
    
    for (int j = 0; j < s2.length(); ++j)
    {
        if (s2[j] >= 'a' && s2[j] <= 'z')
            s2[j] -= 32;
    }
    
    for (int i = 0; i < s1.length(); ++i)
    {
        int j;
        for (j = 0; j < s2.length(); ++j)
        {
            if (s1[i] == s2[j])
                break;
        }
        if (j == s2.length() && false == sFlag[s1[i]])
        {
            cout << s1[i];
            sFlag[s1[i]] = true;
        }
    }
    
    return 0;
}