/*
1065 单身狗
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Peo
{
    int couple;
    bool present;
};

int main()
{
    int N;
    cin >> N;
    int id1, id2;
    Peo p[100000] = {};
    
    for (int i = 0; i < N; ++i)
    {
        cin >> id1 >> id2;
        p[id1].couple = id2;
        p[id2].couple = id1;
    }
    
    int num;
    cin >> num;
    vector<int> v;
    int id;
    for (int i = 0; i < num; ++i)
    {
        cin >> id;
        p[id].present = true;
        v.push_back(id);
    }
    
    vector<int> rst;
    for (auto i = v.begin(); i != v.end(); ++i)
    {
        if (0 == p[*i].couple)
        {
            if (p[0].couple != *i)
                rst.push_back(*i);
            else
            {
                if (true != p[p[0].couple].present)
                    rst.push_back(*i);
            }
        }
        else
        {
            if (true != p[p[*i].couple].present)
                rst.push_back(*i);
        }
    }
    
    sort(rst.begin(), rst.end());
    cout << rst.size() << endl;
    for (auto i = rst.begin(); i != rst.end(); ++i)
    {
        printf("%05d", *i);
        if (i != rst.end() - 1)
            printf(" ");
    }
    
    return 0;
}