/*
1070 结绳
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> v;
    int tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());
    double rst = v[0];
    for (int i = 1; i < N; ++i)
        rst = (rst + v[i]) / 2;
    
    cout << (int)rst;
    
    return 0;
}