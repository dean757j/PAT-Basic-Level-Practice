/*
1002 写出这个数
*/
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    char ch;
    int sum = 0;
    while ('\n' != (ch = getchar()))
    {
        sum = sum + ch - '0';
    }
    
    string name[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    stack<int> s_sum;
    while (0 != sum)
    {
        s_sum.push(sum % 10);
        sum /= 10;
        if (0 == sum)
        {
            while (!s_sum.empty())
            {
                cout << name[s_sum.top()];
                s_sum.pop();
                if (!s_sum.empty())
                    cout << " ";
            }
        }
    }
    
    return 0;
}