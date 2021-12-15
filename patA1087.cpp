/*
1087 有多少不同的值
*/
#include <iostream>
#include <set>

using namespace std;

int main()
{
    int N;
    cin >> N;
    
    set<int> rst;
    for (int i = 1; i <= N; ++i)
        rst.insert(i / 2 + i / 3 + i / 5);
    cout << rst.size();
    
    return 0;
}