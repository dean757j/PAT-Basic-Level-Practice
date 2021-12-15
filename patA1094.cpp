/*
1094 谷歌的招聘
*/
#include <iostream>
#include <math.h>

using namespace std;

bool IsPrime(int num)
{
    if (1 == num || 0 == num)
        return false;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (0 == num % i)
            return false;
    }
    return true;
}

int main()
{
    int L, K;
    string N;
    cin >> L >> K >> N;
    
    for (int i = 0; i <= L - K; ++i)
    {
        string sub = N.substr(i, K);
        if (IsPrime(stoi(sub)))
        {
            cout << sub;
            return 0;
        }
    }
    cout << "404";
        
    return 0;
}