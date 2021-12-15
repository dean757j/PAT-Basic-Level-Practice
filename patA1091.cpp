/*
1091 N-自守数
*/
#include <iostream>

using namespace std;

int main()
{
    int M;
    cin >> M;
    for (int i = 0; i < M; ++i)
    {
        int K;
        cin >> K;
        int mod = 1;
        int tmp = K;
        while (tmp)
        {
           mod *= 10;
            tmp /= 10;
        }
        int flag = 0;
        for (int j = 0; j < 10; ++j)
        {
            if (j * K * K % mod == K)
            {
                cout << j << " " << j * K * K << endl;
                flag = 1;
                break;
            }
        }
        if (0 == flag)
            cout << "No" << endl;
        
    }
    
    return 0;
}