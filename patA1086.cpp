/*
1086 就不告诉你
*/
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    a = a * b;
    string s = to_string(a);
    reverse(s.begin(), s.end());
    a = atoi(s.c_str());
    s = to_string(a);
    
    cout << s;
    
    return 0;
}