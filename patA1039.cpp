/*
1039 到底买不买
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    int color[128] = {0};
    
    for (auto i = s1.cbegin(); i != s1.cend(); ++i)
        ++color[*i];
    
    int less = 0;
    for (auto i = s2.cbegin(); i != s2.cend(); ++i)
    {
        if (0 != color[*i])
        {
            --color[*i];
        }
        else
            ++less;
    }
    
    if (0 != less)
        cout << "No" << " " << less;
    else
        cout << "Yes" << " " << s1.length() - s2.length();
    
    return 0;
}