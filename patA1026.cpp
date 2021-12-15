/*
1026 程序运行时间
*/
#include <iostream>

using namespace std;

int main()
{
    int c1, c2, t;
    cin >> c1 >> c2;
    
    t = ((c2 - c1) + 50 ) / 100;
    
    int h = t / 3600;
    t = t % 3600;
    int m = t / 60;
    int s = t % 60;
    printf("%02d:%02d:%02d", h, m, s);
    
    return 0;
}