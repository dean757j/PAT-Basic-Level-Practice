/*
1068 万绿丛中一点红
*/
#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<vector<int>> v;
int m, n, val;

bool IsTrue(int x, int y)
{
    int index[8][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
    int nx, ny;
    for (int i = 0; i < 8; ++i)
    {
        nx = x + index[i][0];
        ny = y + index[i][1];
        if (nx >= 0 && ny >= 0 && nx < n && ny < m && v[x][y] - v[nx][ny] >= - val && v[x][y] - v[nx][ny] <= val)
            return false;
    }
    return true;
}

int main()
{
    scanf("%d %d %d", &m, &n, &val);
    
    v.resize(n, vector<int> (m));
    map<int, int> p;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            scanf("%d", &v[i][j]);
            ++p[v[i][j]];
        }
    }
    
    int cnt = 0;
    int x, y;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (1 == p[v[i][j]] && true == IsTrue(i, j))
            {
                x = j + 1;
                y = i + 1;
                ++cnt;
            }
        }
    }
    
    if (1 == cnt)
        printf("(%d, %d): %d", x, y, v[y - 1][x - 1]);
    else if (cnt > 1)
        printf("Not Unique");
    else
        printf("Not Exist");
    
    return 0;
}