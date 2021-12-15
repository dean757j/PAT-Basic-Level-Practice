/*
1082 射击比赛
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Peo
{
    int id;
    int score;
};

bool cmp(Peo a, Peo b)
{
    return a.score < b.score;
}

int main()
{
    int N;
    cin >> N;
    
    int id, scoreX, scoreY;
    vector<Peo> rst;
    Peo tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> id >> scoreX >> scoreY;
        tmp.id = id;
        tmp.score = scoreX * scoreX + scoreY * scoreY;
        rst.push_back(tmp);
    }
    
    sort(rst.begin(), rst.end(), cmp);
    printf("%04d %04d", rst[0].id, rst[rst.size() - 1].id);
    
    return 0;
}