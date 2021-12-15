/*
1014 福尔摩斯的约会
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string days[7] = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    
    int k1, k2, d;
    k1 = s1.length() < s2.length() ? s1.length() : s2.length();
    k2 = s3.length() < s4.length() ? s3.length() : s4.length();
    d = 0;
    
    for (int i = 0; i < k1; i++)
    {
        if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'G')
        {
            cout << days[s1[i] - 'A'] << " ";
            d = i + 1;
            break;
        }
    }
    
    for (int i = d; i < k1; i++)
    {
        if (s1[i] == s2[i] && s1[i] >= '0' && s1[i] <= '9')
        {
            cout << 0 << s1[i] - '0' << ":";
            break;
        }
        if (s1[i] == s2[i] && s1[i] >= 'A' && s1[i] <= 'N')
        {
            cout << s1[i] - 'A' + 10 << ":";
        }
    }
    
    for (int i = 0; i < k2; i++)
    {
        if ((s3[i] == s4[i] && s3[i] >= 'a' && s3[i] <= 'z') || (s3[i] == s4[i] && s3[i] >= 'A' && s3[i] <= 'Z'))
        {
            if (i < 9)
                cout << 0 << i;
            else
                cout << i;
        }
    }
    
    return 0;
}
