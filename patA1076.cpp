/*
1076 Wifi密码
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    getchar();
    for (int i = 0; i < N; ++i)
    {
        string s;
        getline(cin, s);
        
        int j = 0;
        while (s[j] != 'T')
            j++;
        cout << s[j - 2] - 'A' + 1;
    }
    
    return 0;
}