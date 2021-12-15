/*
1090 危险品装箱
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    map<int, vector<int>> id;
    for (int i = 0; i < N; ++i)
    {
        int id1, id2;
        cin >> id1 >> id2;
        id[id1].push_back(id2);
        id[id2].push_back(id1);
    }
    
    for (int i = 0; i < M; ++i)
    {
        int num;
        cin >> num;
        int flag[100000] = {0};
        vector<int> v(num);
        int rstFlag = 0;
        for (int j = 0; j < num; ++j)
        {
            cin >> v[j];
            flag[v[j]] = 1;  
        }
        for (int j = 0; j < num; ++j)
        {
            for (int k = 0; k < id[v[j]].size(); ++k)
            {
                if (1 == flag[id[v[j]][k]])
                    rstFlag = 1;
            }
        } 
                
        if (rstFlag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    
    return 0;
}