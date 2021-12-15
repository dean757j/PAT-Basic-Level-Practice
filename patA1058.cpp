/*
1058 选择题
*/
#include <iostream>
#include <string.h>

using namespace std;

struct Ques
{
    int point;
    int ansCnt;
    int correctCnt;
    int ans[128];
    int wrongCnt;
};

int main()
{
    int N, M;
    cin >> N >> M;
    
    Ques ques[101];
    memset(ques, 0, sizeof(Ques) * 101);
    for (int i = 1; i <= M; ++i)
    {
        cin >> ques[i].point >> ques[i].ansCnt >> ques[i].correctCnt;
        for (int j = 0; j < ques[i].correctCnt; ++j)
        {
            char c;
            cin >> c;
            ques[i].ans[c] = 1;
        }
    }
    getchar();
    
    for (int i = 0; i < N; ++i)
    {
        string s;
        getline(cin, s);
        
        int pPoint = 0;
        int k = 0;
        for (int j = 1; j <= M; ++j)
        {
            while (k < s.length())
            {
                if (s[k] == '(')
                    break;
                ++k;
            }
            ++k;
            if (s[k] - '0' != ques[j].correctCnt)
                ++ques[j].wrongCnt;
            else
            {
                int l;
                for (l = 0; l < ques[j].correctCnt; ++l)
                {
                    k = k + 2;
                    if (1 != ques[j].ans[s[k]])
                    {
                        ++ques[j].wrongCnt;
                        break;
                    }
                }
                if (l == ques[j].correctCnt)
                    pPoint += ques[j].point;
            }
        }
        cout << pPoint << endl;
    }
    
    int maxQues = 0;
    for (int i  = 1; i <= M; ++i)
    {
        if (ques[i].wrongCnt > maxQues)
            maxQues = ques[i].wrongCnt;
    }
    if (0 != maxQues)
    {
        cout << maxQues;
        for (int i  = 1; i <= M; ++i)
        {
            if (ques[i].wrongCnt == maxQues)
                cout << " " << i;
        }
    }
    else
        cout << "Too simple";
    
    cout << endl;
    
    return 0;
}