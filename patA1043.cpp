/*
1043 输出PATest
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int charNum[6] = {0};
    int sum = 0;
    for (auto i = s.cbegin(); i != s.cend(); ++i)
    {
        switch (*i)
        {
            case 'P':
                ++charNum[0];
                ++sum;
                break;
            case 'A':
                ++charNum[1];
                ++sum;
                break;
            case 'T':
                ++charNum[2];
                ++sum;
                break;
            case 'e':
                ++charNum[3];
                ++sum;
                break;
            case 's':
                ++charNum[4];
                ++sum;
                break;
            case 't':
                ++charNum[5];
                ++sum;
                break;
            default:
                break;
        }
    }
    
    string outS = "PATest";
    
    while (sum > 0)
    {
        for (auto i = outS.cbegin(); i != outS.cend() && sum > 0; ++i)
        {
            if (*i == 'P')
            {
                if (0 < charNum[0]--)
                {
                    cout << 'P';
                    --sum;
                }
            }
            else if (*i == 'A')
            {
                if (0 < charNum[1]--)
                {
                    cout << 'A';
                    --sum;
                }
            }
            else if (*i == 'T')
            {
                if (0 < charNum[2]--)
                {
                    cout << 'T';
                    --sum;
                }
            }
            else if (*i == 'e')
            {
                if (0 < charNum[3]--)
                {
                    cout << 'e';
                    --sum;
                }
            }
            else if (*i == 's')
            {
                if (0 < charNum[4]--)
                {
                    cout << 's';
                    --sum;
                }
            }
            else if (*i == 't')
            {
                if (0 < charNum[5]--)
                {
                    cout << 't';
                    --sum;
                }
            }
        }
    }
    return 0;
}