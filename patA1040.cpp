/*
1040 有几个PAT
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int pNum = 0, aNum = 0, tNum = 0;
    int sum = 0;
    for (auto i = s.cbegin(); i != s.cend(); ++i)
    {
        if (*i == 'T')
            ++tNum;
    }
    
    for (auto i = s.cbegin(); i != s.cend(); ++i)
    {
        if (*i == 'P')
            ++pNum;
        if (*i == 'T')
            --tNum;
        if (*i == 'A')
            sum = (sum + pNum * tNum % 1000000007 ) % 1000000007;
    }
    cout << sum;
    
    return 0;
}