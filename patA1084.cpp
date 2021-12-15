/*
1084 外观数列
*/
#include <iostream>

using namespace std;

int main()
{
    string d;
    int N;
    cin >> d >> N;
    for (int i = 0; i < N - 1; ++i)
    {
        string tmp;
        for (int j = 0; j < d.length(); ++j)
        {
            int cnt = 1;
            while (d[j] == d[j + 1])
            {
                ++j;
                ++cnt;
            }
            tmp += d[j] + to_string(cnt);
        }
        d = tmp;
    }
    
    cout << d;
    
    return 0;
}
