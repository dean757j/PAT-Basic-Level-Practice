/*
1019 数字黑洞
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(char a, char b)
{
    return a > b;
}

int main()
{
    string s;
    cin >> s;
    
    s.insert(0, 4 - s.length(), '0');
    string a, b;
    int rst;
    
    do
    {
        a = s;
        b = s;
        sort(a.begin(), a.end(), cmp);
        sort(b.begin(), b.end());
        rst = stoi(a) - stoi(b);
        s = to_string(rst);
        s.insert(0, 4 - s.length(), '0');
        cout << a << " - " << b << " = " << s << endl;
    } while (s != "6174" && s!= "0000");
    
    return 0;
}