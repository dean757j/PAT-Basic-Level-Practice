/*
1009 说反话
*/
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> strStack;
    string strS;
    
    while (cin >> strS)
    {
        strStack.push(strS);
    }
    
    while (!strStack.empty())
    {
        cout << strStack.top();
        strStack.pop();
        if (!strStack.empty())
            cout << " ";
    }
    
    return 0;
}
