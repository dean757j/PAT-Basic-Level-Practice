/*
1064 朋友数
*/
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int FriNum(int num)
{
    int sum = 0;
    while (0 != num)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    int N;
    cin >> N;
    set<int> rst;
    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        rst.insert(FriNum(num));
    }
    
    int flag = 0;
    cout << rst.size() <<endl;
    for (auto i = rst.begin(); i != rst.end(); ++i)
    {
        if (1 == flag)
            cout << " ";
        else
            flag = 1;
        cout << *i;
    }
    cout << endl;
    
    return 0;
}