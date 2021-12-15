/*
1017 A除以B
*/
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    int b;
    cin >> a >> b;
    
    int shang = 0;
    int yu = 0;
    for (int i = 0; i < a.size(); i++)
    {
        shang = (yu * 10 + a[i] - '0') / b;
        yu = (yu * 10 + a[i] - '0') % b;
        if (0 == shang && 0 == i && 1 != a.size());
        else
            cout << shang;
    }
    cout << " " << yu;
    
    return 0;
}