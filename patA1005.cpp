/*
1005 继续(3n+1)猜想
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int n;
    cin >> n;
    
    int arr[10000] = {};
    vector<int> v(n);
    int num;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v[i] = num;
        while (1 != num)
        {
            if (0 != num % 2)
                num = 3 * num + 1;
            num /= 2;
            if (1 == arr[num])
                break;
            arr[num] = 1;
        }
    }
    
    sort(v.begin(), v.end(), cmp);
    for (int i = 0; i < v.size(); i++)
    {
        if(1 != arr[v[i]])
        {
            if (1 == flag)
                cout << " ";
            cout << v[i];
            flag = 1;
        }
    }
    
    return 0;
}