/*
1047 编程团体赛
*/
#include <iostream>

using namespace std;

int main()
{
    int N, num1, num2, score;
    int sum[1001] = {0};
    cin >> N;
    
    for (int i = 0; i < N; ++i)
    {
        scanf("%d-%d %d", &num1, &num2, &score);
        sum[num1] += score;
    }
    
    int max = -1, maxId = 0;
    for (int i = 1; i <= 1000; ++i)
    {
        if (sum[i] > max)
        {
            max = sum[i];
            maxId = i;
        }
    }
    
    cout << maxId << " " << max << endl;
    
    return 0;
}