/*
1038 统计同成绩学生
*/
#include <iostream>

using namespace std;

int main()
{
    int scoreNum[101] = {0};
    int N;
    cin >> N;
    int score;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> score;
        ++scoreNum[score];
    }
    
    int num;
    cin >> num;
    for (int i = 0; i < num; ++i)
    {
        cin >> score;
        cout << scoreNum[score];
        if (i != num - 1)
            cout << " ";
    }
    
    
    return 0;
}