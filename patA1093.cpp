/*
1093 字符串A+B
*/
#include <iostream>

using namespace std;

int main()
{
    string s1, s2, rst;
    getline(cin, s1);
    getline(cin, s2);
    rst = s1 + s2;
    
    int flag[128]  = {0};
    for (int i = 0; i < rst.length(); ++i)
    {
        if (0 == flag[rst[i]])
        {
            cout << rst[i];
            flag[rst[i]] = 1;
        }
    }
    
    return 0;
}