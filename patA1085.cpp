/*
1085 PAT单位排行
*/
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

struct School
{
    string name;
    int scoreB = 0;
    int scoreA = 0;
    int scoreT = 0;
    int score = 0;
    int stuNum = 0;
};

bool cmp(School a, School b)
{
    if (a.score != b.score)
        return a.score > b.score;
    else
    {
        if (a.stuNum != b.stuNum)
            return a.stuNum < b.stuNum;
        else
        {
            return a.name < b.name;
        }
    }
}

int main()
{
    int N;
    cin >> N;
    
    map<string, int> index;
    vector<School> rstSchool;
    int cnt = 1;
    for (int i = 0; i < N; ++i)
    {
        string id, sch;
        int scoreStu;
        cin >> id >> scoreStu >> sch;
        transform(sch.begin(), sch.end(), sch.begin(), ::tolower);
        
        if (0 == index[sch])
        {
            School tmp;
            tmp.name = sch;
            if (id[0] == 'B')
                tmp.scoreB = scoreStu;
            else if (id[0] == 'A')
                tmp.scoreA = scoreStu;
            else if (id[0] == 'T')
                tmp.scoreT = scoreStu;
            tmp.stuNum = 1;
            rstSchool.push_back(tmp);
            index[sch] = cnt++;
        }
        else
        {
            int j = index[sch] - 1;
            if (id[0] == 'B')
                rstSchool[j].scoreB += scoreStu;
            else if (id[0] == 'A')
                rstSchool[j].scoreA += scoreStu;
            else if (id[0] == 'T')
                rstSchool[j].scoreT += scoreStu;
            ++rstSchool[j].stuNum;
        }
    }
    
    for (int i = 0; i < rstSchool.size(); ++i)
    {
        rstSchool[i].score = rstSchool[i].scoreB / 1.5 + rstSchool[i].scoreA + rstSchool[i].scoreT * 1.5;
    }
    
    sort(rstSchool.begin(), rstSchool.end(), cmp);
    
    cout << rstSchool.size() << endl;
    int rank = 1;
    int sub = 1;
    cout << rank << " " << rstSchool[0].name << " " << rstSchool[0].score << " " << rstSchool[0].stuNum << endl;
    int before = rstSchool[0].score;
    for (int i = 1; i < rstSchool.size(); ++i)
    {
        if (rstSchool[i].score != before)
        {
            rank += sub;
            sub = 1;
        }
        else
            ++sub;
        cout << rank << " " << rstSchool[i].name << " " << rstSchool[i].score << " " << rstSchool[i].stuNum << endl;
        before = rstSchool[i].score;
    }
    
    
    return 0;
}