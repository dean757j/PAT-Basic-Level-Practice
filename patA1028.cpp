/*
1028 人口普查
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
struct People
{
    char name[6];
    int yy;
    int mm;
    int dd;
};
    
bool cmp(People a, People b)
{
    if (a.yy != b.yy)
        return a.yy > b.yy;
    else
    {
        if (a.mm != b.mm)
            return a.mm > b.mm;
        else
            return a.dd > b.dd;
    }
}

int main()
{
    int num;
    cin >> num;
    People p;
    vector<People> vp;
    
    for (int i = 0; i < num; ++i)
    {
        scanf("%s %d/%d/%d\n", &p.name, &p.yy, &p.mm, &p.dd);
        if (p.yy < 1814 || (p.yy == 1814 && p.mm <9) || (p.yy == 1814 && p.mm == 9 && p.dd < 6 ) \
             || p.yy > 2014 || (p.yy == 2014 && p.mm >9) || (p.yy == 2014 && p.mm == 9 && p.dd > 6))
            continue;
        else
            vp.push_back(p);
    }
    
    sort(vp.begin(), vp.end(), cmp);
    
    cout << vp.size();
    if (0 != vp.size())
        printf(" %s %s", vp[vp.size() - 1].name, vp[0].name);
    
    return 0;
}