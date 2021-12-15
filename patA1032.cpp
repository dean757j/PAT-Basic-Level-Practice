/*
1032 挖掘机技术哪家强
*/
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int wjj[100001] = {0};
    
    int index, score;
    int maxScore = -1;
    int maxId = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> index >> score;
        wjj[index] += score;
        if (wjj[index] > maxScore)
        {
            maxId = index;
            maxScore = wjj[index];
        }
    }
    
    cout << maxId << " " << maxScore;
    
    return 0;
}