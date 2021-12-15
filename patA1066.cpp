/*
1066 图像过滤
*/
#include <iostream>

using namespace std;

int main()
{
    int M, N;
    int a, b, c;
    cin >> M >> N >> a >> b >> c;
    
    for (int i = 0; i < M; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            int gray;
            scanf("%d", &gray);
            if (gray >= a && gray <= b)
                gray = c;
            printf("%03d", gray);
            if (j != N - 1)
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}