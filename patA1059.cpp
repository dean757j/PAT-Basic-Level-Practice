/*
1059 C语言竞赛
*/
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

struct Peo
{
    int rank;
    int flag;
};

bool IsPrime(int a)
{
    if (a == 1)
        return false;
    for (int i = 2; i <= sqrt(a); ++i)
    {
        if (0 == a % i)
            return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    
    Peo p[10000];
    memset(p, 0, sizeof(Peo) * 10000);
    int id;
    for (int i = 1; i <= N; ++i)
    {
        cin >> id;
        p[id].rank = i;
    }
    
    int K;
    cin >> K;
    for (int i = 0; i < K; ++i)
    {
        cin >> id;
        
        if (0 == p[id].rank)
        {
            printf("%04d", id);
            cout << ": Are you kidding?" << endl;
            continue;
        }
        
        if (0 != p[id].flag)
        {
            printf("%04d", id);
            cout << ": Checked" << endl;
            continue;
        }
        
        if (IsPrime(p[id].rank))
        {
            printf("%04d", id);
            cout << ": Minion" << endl;
            p[id].flag = 1;
        }
        else
        {
            if (p[id].rank == 1)
            {
                printf("%04d", id);
                cout << ": Mystery Award" << endl;
                p[id].flag = 1;
            }
            else
            {
                printf("%04d", id);
                cout << ": Chocolate" << endl;
                p[id].flag = 1;
            }
        }
    }
    
    return 0;
}