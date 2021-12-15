/*
1015 德才论
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Stu
{
    int num;
    int de;
    int cai;
    int sum;
};

bool cmp(Stu s1, Stu s2)
{
    if (s1.sum != s2.sum)
        return s1.sum > s2.sum;
    else if (s1.de != s2.de)
        return s1.de > s2.de;
    else
        return s1.num < s2.num;
}

int main()
{
    int n, l, h;
    cin >> n >> l >> h;
    vector<Stu> v1;
    vector<Stu> v2;
    vector<Stu> v3;
    vector<Stu> v4;
    
    for (int i = 0; i < n; i++)
    {
        int num, de, cai;
        cin >> num >> de >> cai;
        
        if (de >= l && cai >= l)
        {
            Stu s;
            s.num = num;
            s.de = de;
            s.cai = cai;
            s.sum = de + cai;
            
            if (de >= h && cai >= h)
                v1.push_back(s);
            else if (de >= h && cai < h)
                v2.push_back(s);
            else if (de < h && cai < h && de >= cai)
                v3.push_back(s);
            else
                v4.push_back(s);
        }
    }
    
    sort(v1.begin(), v1.end(), cmp);
    sort(v2.begin(), v2.end(), cmp);
    sort(v3.begin(), v3.end(), cmp);
    sort(v4.begin(), v4.end(), cmp);
    
    cout << v1.size() + v2.size() + v3.size() + v4.size() << endl;
    
    for (int i = 0; i < v1.size(); i++)
        printf("%d %d %d\n", v1[i].num, v1[i].de, v1[i].cai);
    for (int i = 0; i < v2.size(); i++)
        printf("%d %d %d\n", v2[i].num, v2[i].de, v2[i].cai);
    for (int i = 0; i < v3.size(); i++)
        printf("%d %d %d\n", v3[i].num, v3[i].de, v3[i].cai);
    for (int i = 0; i < v4.size(); i++)
        printf("%d %d %d\n", v4[i].num, v4[i].de, v4[i].cai);
    
    return 0;
}