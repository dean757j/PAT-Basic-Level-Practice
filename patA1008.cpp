/*
1008 数组元素循环右移问题
*/
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    deque<int> numDeque;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        numDeque.push_back(num);
    }
    for (int i = 0; i < m; i++)
    {
        auto element = numDeque.end() - 1;
        numDeque.pop_back();
        numDeque.push_front(*element);
    }
    
    int flag = 1;
    for (auto i = numDeque.begin(); i != numDeque.end(); ++i)
    {
        if (0 == flag)
            cout << " ";
        cout << *i;
        flag = 0;
    }
    
    
    return 0;
}