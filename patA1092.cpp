/*
1092 最好吃的月饼
*/
#include <iostream>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    int moonCake[1001] = {0};
    for (int i = 0; i < M; ++i)
    {
        for (int j = 1; j <= N; ++j)
        {
            int tmp;
            cin >> tmp;
            moonCake[j] += tmp;
        }
    }
    
    int max = -1;
    for (int i = 1; i <= N; ++i)
    {
        if (moonCake[i] > max)
            max = moonCake[i];
    }
    cout << max << endl;
    
    int flag = 0;
    for (int i = 1; i <= N; ++i)
    {
        if (moonCake[i] == max)
        {
            if (flag == 0)
                flag = 1;
            else
                cout << " ";
            cout << i;
        }
    }
    
    return 0;
}