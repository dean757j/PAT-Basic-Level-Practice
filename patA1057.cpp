/*
1057 数零壹
*/
#include <iostream>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    
    int sum = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            sum += s[i] - 'a' + 1;
        else if (s[i] >= 'A' && s[i] <= 'Z')
            sum += s[i] - 'A' + 1;
    }
    
    int cnt0 = 0, cnt1 = 0;
    while (0 != sum)
    {
        if (sum & 1)
            cnt1++;
        else
            cnt0++;
        sum = sum >> 1;
    }
    cout << cnt0 << " " << cnt1 << endl;
    
    return 0;
}