/*
1063 计算谱半径
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int max = -1;
    for (int i = 0; i < N; ++i)
    {
        int a, b, tmp;
        cin >> a >> b;
        tmp = a * a + b * b;
        if (tmp > max)
            max = tmp;
    }
    printf("%.2f\n", sqrt(max));
    
    return 0;
}