/*
1075 链表元素分类
*/
#include <iostream>
#include <vector>

using namespace std;

struct Node
{
    int data;
    int next;
} node[100001];

int main()
{
    int start, N, K;
    scanf("%d%d%d", &start, &N, &K);
    
    for (int i = 0; i < N; ++i)
    {
        int addr;
        scanf("%d", &addr);
        scanf("%d%d", &node[addr].data, &node[addr].next);
    }
    
    vector<int> v[3];
    int p = start;
    while (-1 != p)
    {
        if (node[p].data < 0)
            v[0].push_back(p);
        else if (node[p].data >=0 && node[p].data <= K)
            v[1].push_back(p);
        else
            v[2].push_back(p);
        p = node[p].next;
    }
    
    int flag = 0;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < v[i].size(); ++j)
        {
            if (0 == flag)
            {
                printf("%05d %d ", v[i][j], node[v[i][j]].data);
                flag = 1;
            }
            else
                printf("%05d\n%05d %d ", v[i][j], v[i][j], node[v[i][j]].data);
        }
    }
    printf("-1");
    
    return 0;
}