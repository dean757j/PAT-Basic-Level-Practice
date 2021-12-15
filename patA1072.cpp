/*
1072 开学寄语
*/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    
    map<int, int> m;
    int mass;
    for (int i = 0; i < M; ++i)
    {
        cin >> mass;
        ++m[mass];
    }
    
    int pNum = 0, mNum = 0;
    for (int i = 0; i < N; ++i)
    {
        string s;
        int num;
        cin >> s >> num;
        int tmp;
        int flag = 0;
        for (int j = 0; j < num; ++j)
        {
            cin >> tmp;
            if (m[tmp] == 1)
            {
                if (0 == flag)
                {
                    cout << s << ":";
                    flag = 1;
                }
                printf(" %04d", tmp);
                ++mNum;
            }
        }
        if (1 == flag)
        {
            ++pNum;
            cout << endl;
        }
    }
    cout << pNum << " " << mNum;
    
    return 0;
}