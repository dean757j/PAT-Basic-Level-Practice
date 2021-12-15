/*
1042 字符统计
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int a[128] = {0};
    
    getline(cin, s);
    
    for (auto i = s.cbegin(); i != s.cend(); ++i)
    {
        if (*i >= 'a' && *i <= 'z')
        {
            ++a[*i];
        }
        else if (*i >= 'A' && *i <= 'Z')
        {
            ++a[*i + 'a' - 'A'];
        }
    }
    
    int maxNum = 0;
    char maxC = 'a';
    for (int i = 0; i < 128; ++i)
    {
        if (a[i] > maxNum)
        {
            maxNum = a[i];
            maxC = i;
        }
        else if (a[i] == maxNum)
        {
            if (i < maxC)
                maxC = i;
        }
    }
    cout << maxC << " " << maxNum;
    
    return 0;
}