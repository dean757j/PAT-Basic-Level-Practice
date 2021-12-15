/*
1048 数字加密
*/
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string A, B;
    cin >> A >> B;
    
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    if (A.length() > B.length())
        B.append(A.length() - B.length(), '0');
    else
        A.append(B.length() - A.length(), '0');
    
    vector<char> rst;
    
    for (int i = 0; i < A.length(); ++i)
    {
        if (1 == i % 2)
        {
            rst.push_back((B[i] - A[i] + 10) % 10 + '0');
        }
        else
        {
            int tmp = (A[i] - '0' + B[i] - '0') % 13;
            if (tmp == 10)
                rst.push_back('J');
            else if (tmp == 11)
                rst.push_back('Q');
            else if (tmp == 12)
                rst.push_back('K');
            else
                rst.push_back(tmp + '0');
        }
    }
    
    for (int i = rst.size() - 1; i >= 0; --i)
        cout << rst[i];
    cout << endl;
    
    return 0;
}