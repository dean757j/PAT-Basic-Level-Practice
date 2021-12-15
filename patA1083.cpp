/*
1083 是否存在相等的差
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int sub[10001] = {0};
    int max = -1;
    for (int i = 1; i <= N; ++i)
    {
        int tmp, rst;
        cin >> tmp;
        rst = abs(tmp - i);
        ++sub[rst];
        if (rst > max)
            max =  rst;
    }
    
    for (int i = max; i >= 0; --i)
    {
        if (sub[i] >= 2)
            cout << i << " " << sub[i] << endl;
    }
    
    return 0;
}