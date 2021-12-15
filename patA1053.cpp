/*
1053 住房空置率
*/
#include <iostream>

using namespace std;

int main()
{
    int N, D;
    float e;
    cin >> N >> e >> D;
    
    int mayCnt = 0, emptyCnt = 0;
    for (int i = 0; i < N; ++i)
    {
        int days;
        cin >> days;
        int cnt = 0;
        for (int j = 0; j < days; ++j)
        {
            float eleVal;
            cin >> eleVal;
            if (eleVal < e)
                ++cnt;
        }
        if (cnt > days / 2)
        {
            if (days > D)
                ++emptyCnt;
            else
                ++mayCnt;
        }
    }
    
    printf("%.1f%% %.1f%%\n", (float)mayCnt * 100 / N, (float)emptyCnt * 100 / N);
    
    return 0;
}