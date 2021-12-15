/*
1055 集体照
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <deque>

using namespace std;

struct Peo
{
    string name;
    int height;
};

bool cmp(Peo a, Peo b)
{
    if (a.height != b.height)
        return a.height > b.height;
    else
        return a.name < b.name;
}

int main()
{
    int N, K;
    cin >> N >> K;
    
    vector<Peo> v;
    Peo tmp;
    for (int i = 0; i < N; ++i)
    {
        cin >> tmp.name >> tmp.height;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), cmp);
    
    int index = 0;
    deque<Peo> first;
    for (int i = 0; i < N / K + N % K; ++i)
    {
        if (0 == i %2)
            first.push_back(v[index++]);
        else
            first.push_front(v[index++]);
    }
    for (auto i = first.begin(); i != first.end(); ++i)
    {
        cout << i->name;
        if (i != first.end() - 1)
            cout << " ";
        else
            cout << endl;
    }

    for (int j = 0; j < K - 1; ++j)
    {
        deque<Peo> d;
        for (int k = 0; k < N / K; ++k)
        {
            if (0 == k % 2)
                d.push_back(v[index++]);
            else
                d.push_front(v[index++]);
        }

        for (auto i = d.begin(); i != d.end(); ++i)
        {
            cout << i->name;
            if (i != d.end() - 1)
                cout << " ";
            else
                cout << endl;
        }
    }
    
    return 0;
}