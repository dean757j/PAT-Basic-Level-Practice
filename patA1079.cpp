/*
1079 延迟的回文数
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool IsPal(string str)
{
    for (int i = 0; i < str.length() / 2; ++i)
    {
        if (str[i] != str[str.length() - i - 1])
            return false;
    }
    return true;
}

string AddString(string str1, string str2)
{
    string str(str1);
    int carry = 0;
    for (int i = str1.length() - 1; i >= 0; --i)
    {
        str[i] = (str1[i] - '0' + str2[i] - '0' + carry) % 10 + '0';
        carry = (str1[i] - '0' + str2[i] - '0' + carry) / 10;
    }
    if (1 == carry)
        str = '1' + str;
    return str;
}

int main()
{
    string s;
    cin >> s;
    
    int i;
    for (i = 0; i < 10; ++i)
    {
        if (true == IsPal(s))
        {
            cout << s << " is a palindromic number.";
            break;
        }
        else
        {
            string s2 = s;
            string rst;
            reverse(s2.begin(), s2.end());
            rst = AddString(s, s2);
            cout << s << " + " << s2 << " = " << rst << endl;
            s = rst;
        }
    }
    if (10 == i)
        cout << "Not found in 10 iterations.";
    
    return 0;
}