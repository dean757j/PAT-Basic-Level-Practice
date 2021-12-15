/*
1060 爱丁顿数
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int N;
    cin >> N;
    
    int num[100001] = {0};
    for (int i = 1; i <= N; ++i)
    {
        cin >> num[i];
    }
    sort(num + 1, num + 1 + N, cmp);
    
    int e = 1;
    while (e <= N)
    {
        if (num[e] <= e)
            break;
        else
            ++e;
    }
    --e;
    cout << e << endl;
    
    return 0;
}