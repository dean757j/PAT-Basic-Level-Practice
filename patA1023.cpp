/*
1023 组个最小数
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    vector<int> num;
    
    for (int i = 0; i < 10; ++i)
    {
        cin >> n;
        for (int j = 0; j < n; ++j)
            num.push_back(i);
    }
    
    sort(num.begin(), num.end());
    
    if (0 == num[0])
    {
        for (int i = 0; i < num.size(); ++i)
        {
            if (0 != num[i])
            {
                int tmp = num[i];
                num[i] = num[0];
                num[0] = tmp;
                break;
            }
        }
    }
    
    for (int i = 0; i < num.size(); ++i)
        cout << num[i];
    
    return 0;
}