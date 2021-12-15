/*
1077 互评成绩计算
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
    {
        int G2;
        cin >> G2;
        vector<int> v;
        for (int j = 0; j < N - 1; ++j)
        {
            int score;
            cin >> score;
            if (score >= 0 && score <= M)
                v.push_back(score);
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for (int k = 1; k < v.size() - 1; ++k)
            sum += v[k];
        int G1 = sum / (v.size() - 2);
        cout << (G1 + G2 + 1) / 2 << endl;
    }
    
    return 0;   
}