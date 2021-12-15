/*
1095 解码PAT准考证
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

struct Stu
{
    string id;
    int score;
} stu[10001];

struct Room
{
    int id;
    int cnt;
};

int N, M;

bool cmp1(Stu a, Stu b)
{
    if (a.score != b.score)
        return a.score > b.score;
    else
        return a.id < b.id;
}

bool cmp3(Room a, Room b)
{
    if (a.cnt != b.cnt)
        return a.cnt > b.cnt;
    else
        return a.id < b.id;
}

void Case1(char c1)
{
    vector<Stu> v1;
    for (int i = 0; i < N; ++i)
    {
        if (stu[i].id[0] == c1)
            v1.push_back(stu[i]);
    }

    if (v1.empty())
        printf("NA\n");
    else
    {
        sort(v1.begin(), v1.end(), cmp1);
        for (int i = 0; i < v1.size(); ++i)
            printf("%s %d\n", v1[i].id.c_str(), v1[i].score);
    } 
}

void Case2(string s2)
{
    int num = 0, sum = 0;
    for (int i = 0; i < N; ++i)
    {
        if (stu[i].id.substr(1, 3) == s2)
        {
            ++num;
            sum += stu[i].score;
        }
    }

    if (!num && !sum)
        printf("NA\n");
    else
        printf("%d %d\n", num, sum);
}

void Case3(string s3)
{
    unordered_map<int, int> m3;
    for (int i = 0; i < N; ++i)
    {
        if (stu[i].id.substr(4, 6) == s3)
            ++m3[stoi(stu[i].id.substr(1, 3))];
    }
    
    vector<Room> v3;
    for (int i = 101; i <= 999; ++i)
    {
        if (m3[i])
        {
            Room tmp;
            tmp.id = i;
            tmp.cnt = m3[i];
            v3.push_back(tmp);
        }            
    }
    
    if (v3.empty())
        printf("NA\n");
    else
    {
        sort(v3.begin(), v3.end(), cmp3);
        for (int i = 0; i < v3.size(); ++i)
            printf("%d %d\n", v3[i].id, v3[i].cnt);
    } 
    
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; ++i)
        cin >> stu[i].id >> stu[i].score;
    for (int i = 1; i <= M; ++i)
    {
        int caseNum;
        string s;
        cin >> caseNum >> s;
        if (1 == caseNum)
        {
            printf("Case %d: 1 %c\n", i, s[0]);
            Case1(s[0]);
        }
        else if (2 == caseNum)
        {
            printf("Case %d: 2 %s\n", i, s.c_str());
            Case2(s);
        }
        else
        {
            printf("Case %d: 3 %s\n", i, s.c_str());
            Case3(s);
        }
    }
    
    return 0;
}