/*
1050 螺旋矩阵
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int N;
    cin >> N;
    vector<int> num(N);
    
    for (int i = 0; i < N; ++i)
        cin >> num[i];
    sort(num.begin(), num.end(), cmp);
    
    int m = 0, n = 0;
    for (n = (int)sqrt((double)N); n >= 1; --n)
    {
        if (0 == N % n)
        {
            m = N / n;
            break;
        }
    }
    
    vector<vector<int>> rst(m, vector<int> (n));
    int level = m / 2 + m % 2;
    int index = 0;
    for (int i = 0; i < level; ++i)
    {
        for (int j = i; j <= n - i - 1 && index < N; ++j)
            rst[i][j] = num[index++];
        for (int j = i + 1; j <= m - i - 2 && index < N; ++j)
            rst[j][n - i - 1] = num[index++];
        for (int j = n - i - 1; j >= i && index < N; --j)
            rst[m - i - 1][j] = num[index++];
        for (int j = m - i - 2; j >= i + 1 && index < N; --j)
            rst[j][i] = num[index++];
    }
    
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << rst[i][j];
            if (j != n - 1)
                cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}