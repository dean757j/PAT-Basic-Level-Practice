/*
1018 锤子剪刀布 
*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    char a, b;
    vector<int> cnt(7, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        if (a == b)
            ++cnt[0];
        else
        {
            if (a == 'C')
            {
                if (b == 'J')
                    ++cnt[1];
                else
                    ++cnt[6];
            }
            else if (a == 'J')
            {
                if (b == 'C')
                    ++cnt[4];
                else
                    ++cnt[2];
            }
            else
            {
                if (b == 'C')
                    ++cnt[3];
                else
                    ++cnt[5];
            }
        }
    }
    
    int w1 = cnt[1] + cnt[2] + cnt[3];
    int w2 = cnt[4] + cnt[5] + cnt[6];
    cout << w1 << " " << cnt[0] << " " << n - w1 - cnt[0] << endl;
    cout << w2 << " " << cnt[0] << " " << n - w2 - cnt[0] << endl;
    
    int max1 = cnt[3];
    int max2 = cnt[6];
    int flag1 = 3;
    int flag2 = 6;
    for (int i = 1; i <= 3; ++i)
    {
        if (cnt[i] > max1)
        {
            max1 = cnt[i];
            flag1 = i;
        }
    }
    
    for (int i = 4; i <= 6; ++i)
    {
        if (cnt[i] > max2)
        {
            max2 = cnt[i];
            flag2 = i;
        }
    }
    
    if (flag1 == 1)
        cout << "C" << " ";
    else if (flag1 == 2)
        cout << "J" << " ";
    else if (flag1 == 3)
        cout << "B" << " ";
    
    if (flag2 == 4)
        cout << "C";
    else if (flag2 == 5)
        cout << "J";
    else if (flag2 == 6)
        cout << "B";
    
    return 0;
}
