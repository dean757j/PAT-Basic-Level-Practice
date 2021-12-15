/*
1067 试密码
*/
#include <iostream>

using namespace std;

int main()
{
    string s0;
    int N;
    cin >> s0 >> N;
    
    getchar();
    while (0 != N)
    {
        string s;
        getline(cin, s);
        if (s == "#")
            break;
        if (s == s0)
        {
            cout << "Welcome in" << endl;
            break;
        }
        else
            cout << "Wrong password: " << s << endl;
        --N;
    }
    
    if (0 == N)
        cout << "Account locked" << endl;
    
    return 0;
}