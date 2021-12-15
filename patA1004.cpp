/*
1004 成绩排名
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string maxName, maxNum;
    string minName, minNum;
    string name, num;
    int max, min, val;
    max = -1;
    min = 101;
    
    for (int i = 0; i < n; i++)
    {
        cin >> name >> num >> val;
        if (val > max)
        {
            max = val;
            maxName = name;
            maxNum = num;
        }
        if (val < min)
        {
            min = val;
            minName = name;
            minNum = num;
        }
    }
    cout << maxName << " " << maxNum << endl;
    cout << minName << " " << minNum << endl;
    
    return 0;
}