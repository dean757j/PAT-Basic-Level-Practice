/*
1062 最简分数
*/
#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    int tmp;
    while (0 != b)
    {
        tmp = a;
        a = b;
        b = tmp % a;
    }
    return a;
}

int main()
{
    int N1, M1, N2, M2, K;
    scanf("%d/%d %d/%d %d", &N1, &M1, &N2, &M2, &K);
    
    int lcmM = M1 * M2 / gcd(M1, M2);
    int lcmMK = lcmM * K / gcd(lcmM, K);
    
    int nN1 = N1 * (lcmMK / M1);
    int nN2 = N2 * (lcmMK / M2);
    int tmp;
    if (nN1 > nN2)
    {
        tmp = nN2;
        nN2 = nN1;
        nN1 = tmp;
    }
    
    int flag = 0;
    for (int i = nN1 + 1; i < nN2; ++i)
    {
        if (K == lcmMK / gcd(i, lcmMK))
        {
            if (1 == flag)
                cout << " ";
            cout << i / gcd(i, lcmMK) << "/" << K;
            flag = 1;
        }
    }
    cout << endl;
    
    return 0;
}