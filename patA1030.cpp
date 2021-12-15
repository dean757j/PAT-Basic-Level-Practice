/*
1030 完美数列
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    long p;
    cin >> N >> p;
    
    vector<long> vec;
    long tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> tmp;
        vec.push_back(tmp);
    }
    
    sort(vec.begin(), vec.end());
    
    int step = 0;
    for (int i = 0; i < N; ++i)
    {
        for (int j = i + step; j < N; ++j)
        {
            if (vec[i] * p >= vec[j])
            {
                tmp = j - i + 1;
                if (tmp > step)
                    step = tmp;
            }
            else
                break;
        }
    }
    
    cout << step;
    
    return 0;
}