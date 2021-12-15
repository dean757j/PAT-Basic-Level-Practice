/*
1061 判断题
*/
#include <iostream>

using namespace std;

struct Ques
{
    int point;
    bool ans;
};

int main()
{
    Ques ques[101];
    int N, M;
    cin >> N >> M;
    
    for (int i = 1; i <= M; ++i)
    {
        cin >> ques[i].point;
    }
    for (int i = 1; i <= M; ++i)
    {
        cin >> ques[i].ans;
    }
    
    for (int i = 0; i < N; ++i)
    {
        int sum = 0;
        for (int j = 1; j <= M; ++j)
        {
            bool tmp;
            cin >> tmp;
            if (tmp == ques[j].ans)
                sum += ques[j].point;
        }
       cout << sum << endl;
    }
    
    return 0;
}