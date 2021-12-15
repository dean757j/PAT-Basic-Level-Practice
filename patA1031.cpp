/*
1031 查验身份证
*/
#include <iostream>
#include <string>

using namespace std;

int quan[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char cert[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
string sId;

bool isTrue()
{
    int sum = 0;
    for (int i = 0; i < 17; ++i)
    {
        if (sId[i] < '0' || sId[i] > '9')
            return false;
        sum += quan[i] * (sId[i] - '0');
    }
    return cert[sum % 11] == sId[17];
}

int main()
{
    int N;
    cin >> N;
    
    bool flag = true;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> sId;
        
        if (!isTrue())
        {
            cout << sId << endl;
            flag = false;
        }
    }
    
    if (flag == true)
        cout << "All passed";
    
    return 0;
}