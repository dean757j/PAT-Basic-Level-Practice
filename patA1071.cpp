/*
1071 小赌怡情
*/
#include <iostream>

using namespace std;

int main()
{
    int T, K;
    cin >> T >> K;
    
    int n1, b, t, n2;
    for (int i = 0; i < K; ++i)
    {
        cin >> n1 >> b >> t >> n2;
        if (t > T)
        {
            printf("Not enough tokens.  Total = %d.\n", T);
            continue;
        }
        if (0 == b)
        {
            if (n2 < n1)
            {
                T += t;
                printf("Win %d!  Total = %d.\n", t, T);
            }
            else
            {
                T -= t;
                printf("Lose %d.  Total = %d.\n", t, T);
                if (0 == T)
                {
                    printf("Game Over.\n");
                    break;
                }
            }
        }
        else if (1 == b)
        {
            if (n2 > n1)
            {
                T += t;
                printf("Win %d!  Total = %d.\n", t, T);
            }
            else
            {
                T -= t;
                printf("Lose %d.  Total = %d.\n", t, T);
                if (0 == T)
                {
                    printf("Game Over.\n");
                    break;
                }
            }
        }
    }
    
    return 0;
}