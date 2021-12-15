/*
1049 数列的片段和
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    long long sum = 0;
    double tmp;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> tmp;
        sum += (long long)(1000 * tmp * (i + 1) * (N - i));
    }

    printf("%.2f\n", sum / 1000.0);
    return 0;
}