/*
1033 旧键盘打字
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    cin >> s2;
    
    bool asci[128]  = {false};
    bool outFlag = false;
    for (auto charLocator = s1.cbegin(); charLocator != s1.cend(); ++charLocator)
    {
        asci[*charLocator] = true;
        if(*charLocator >= 'A' && *charLocator <= 'Z')
            asci[*charLocator + 32] = true;
    }
    
    for (auto charLocator = s2.cbegin(); charLocator != s2.cend(); ++charLocator)
    {
        if (asci[*charLocator] != true)
        {
            if(*charLocator >= 'A' && *charLocator <= 'Z')
            {
                if (asci['+'] != true)
                {
                    cout << *charLocator;
                    outFlag = true;
                }
            }
            else
            {
                cout << *charLocator;
                outFlag = true;
            }
        }
    }
    if (outFlag != true)
        cout << endl;
    
    return 0;
}