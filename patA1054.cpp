/*
1054 求平均值
*/
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    char a[50], b[50];
    float tmp = 0.0, sum = 0.0;
    int cnt = 0;
    for (int i = 0; i < N; ++i)
    {
        scanf("%s", a);
        sscanf(a, "%f", &tmp);
        sprintf(b, "%.2f", tmp);
        int flag = 0;
        
        for (int j = 0; j < strlen(a); ++j)
        {
            if (a[j] != b[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag || tmp > 1000 || tmp < -1000)
        {
            printf("ERROR: %s is not a legal number\n", a);
        }
        else
        {
            sum += tmp;
            ++cnt;
        }
    }
    
    if (cnt == 1)
        printf("The average of 1 number is %.2f\n", sum);
    else if (cnt > 1)
        printf("The average of %d numbers is %.2f\n", cnt, sum / cnt);
    else
        printf("The average of 0 numbers is Undefined\n");
    
    return 0;
}