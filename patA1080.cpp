/*
1080 MOOC期终成绩
*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct Stu
{
    string name;
    int Gp;
    int Gm;
    int Gf;
    int G;
};

bool cmp(Stu a, Stu b)
{
    if (a.G != b.G)
        return a.G > b.G;
    else
        return a.name < b.name;
}

int main()
{
    int P, M, N;
    cin >> P >> M >> N;
    
    Stu tmp;
    vector<Stu> v;
    map<string, int> index;
    int cnt = 1;
    string s;
    int score;
    for (int i = 0; i < P; ++i)
    {
        cin >> s >> score;
        if (score >= 200)
        {
            tmp.name = s;
            tmp.Gp = score;
            tmp.Gm = -1;
            tmp.Gf = -1;
            tmp.G = 0;
            v.push_back(tmp);
            index[tmp.name] = cnt++;
        }
    }
    
    for (int i = 0; i < M; ++i)
    {
        cin >> s >> score;
        if (0 != index[s])
        {
            v[index[s] - 1].Gm = score;
        }
    }
    
    for (int i = 0; i < N; ++i)
    {
        cin >> s >> score;
        if (0 != index[s])
        {
            int offset = index[s] - 1;
            v[offset].Gf = score;
            v[offset].G = score;
            if (v[offset].Gm > v[offset].Gf)
                v[offset].G = (int)(v[offset].Gm * 0.4 + v[offset].Gf * 0.6 + 0.5);
        }
    }
    
    vector<Stu> rst;
    for (int i = 0; i < v.size(); ++i)
    {
        if (v[i].G >= 60)
            rst.push_back(v[i]);
    }
    
    sort(rst.begin(), rst.end(), cmp);
    for (int i = 0; i < rst.size(); ++i)
        printf("%s %d %d %d %d\n", rst[i].name.c_str(), rst[i].Gp, rst[i].Gm, rst[i].Gf, rst[i].G);
    
    return 0;
}