/*
1056 组合数的和
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    int num;
    for (int i = 0; i < N; ++i)
    {
        cin >> num;
        sum += num * 10 * (N - 1) + num * (N - 1);
    }
    
    cout << sum << endl;
    
    return 0;
}