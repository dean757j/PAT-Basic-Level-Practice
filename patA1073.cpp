/*
1073 多选题常见计分法
*/
#include <iostream>

using namespace std;

struct Ques
{
    int point;
    int ansCnt;
    int ansCorrectCnt;
    int wrongCnt[5] = {0};
    int ans[5] = {0};
};

int main()
{
    int N, M;
    cin >> N >> M;
    
    Ques ques[101];
    for (int i = 1; i <= M; ++i)
    {
        Ques tmp;
        cin >> tmp.point >> tmp.ansCnt >> tmp.ansCorrectCnt;
        ques[i].point = tmp.point;
        ques[i].ansCnt = tmp.ansCnt;
        ques[i].ansCorrectCnt = tmp.ansCorrectCnt;
        
        for (int j = 0; j < tmp.ansCorrectCnt; ++j)
        {
            char c;
            cin >> c;
            ques[i].ans[c - 'a'] = 1;
        }
    }
    
    getchar();
    for (int i = 0; i < N; ++i)
    {
        string s;
        getline(cin, s);

        int index = 0;
        double score = 0.0;
        for (int j = 1; j <= M; ++j)
        {
            int pAns[5] = {};
            while(s[index] != '(')
                ++index;
            ++index;
           
            int numA = s[index] - '0';
            for (int k = 0; k < numA; ++k)
            {
                pAns[s[index + 2] - 'a'] = 1;
                index += 2;
            }   
            
            bool isTrue = true;
            bool isHalfTrue = false;
            for (int k = 0; k < 5; ++k)
            {
                if (ques[j].ans[k] != pAns[k])
                {
                    ++ques[j].wrongCnt[k];
                    if (ques[j].ans[k] == 1 && pAns[k] == 0)
                        isHalfTrue = true;
                    if (ques[j].ans[k] == 0 && pAns[k] == 1)
                        isTrue = false;
                }
            }
            if (isTrue && !isHalfTrue)
                    score += ques[j].point;
            if (isTrue && isHalfTrue)
                score += (double)ques[j].point / 2;
        }
        printf("%.1lf\n", score);
    }
    
    int max = 0;
    for (int i = 1; i <= M; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            if (ques[i].wrongCnt[j] > max)
                max = ques[i].wrongCnt[j];
        }
    }
    
    if (0 == max)
        printf("Too simple\n");
    else
    {
        for (int i = 1; i <= M; ++i)
        {
            for (int j = 0; j < 5; ++j)
            {
                if (ques[i].wrongCnt[j] == max)
                    printf("%d %d-%c\n", max, i, j + 'a');
            }
        }
    }
    
    return 0;
}