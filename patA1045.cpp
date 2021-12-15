/*
1045 快速排序
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N, tmp;
    cin >> N;
    vector<int> num;
    vector<int> numSort;
    vector<int> rst;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> tmp;
        num.push_back(tmp);
        numSort.push_back(tmp);
    }
    
    sort(numSort.begin(), numSort.end());
    int max = 0;
    for (int i = 0; i < N; ++i)
    {
        if (num[i] > max)
            max = num[i];
        if (num[i] == numSort[i] && num[i] >= max)
            rst.push_back(num[i]);
    }
    
    sort(rst.begin(), rst.end());
    cout << rst.size() << endl;
    for (int i = 0; i < rst.size(); ++i)
    {
        cout << rst[i];
        if (i != rst.size() - 1)
            cout << " ";
    }
    
    cout << endl;
    return 0;
}