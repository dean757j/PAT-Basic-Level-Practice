/*
1069 微博转发抽奖
*/
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int M, N, S;
    cin >> M >> N >> S;
    
    string trans[1001];
    getchar();
    for (int i = 1; i <= M; ++i)
        getline(cin, trans[i]);
    
    if (S > M)
        cout << "Keep going...";
    else
    {
        map<string, int> m;
        for (int index = S; index <= M;)
        {
            if (0 == m[trans[index]])
            {
                cout << trans[index] << endl;
                ++m[trans[index]];
                index += N;
            }
            else
                ++index;
        }
    }
    
    return 0;
}