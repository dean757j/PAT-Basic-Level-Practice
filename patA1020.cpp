/*
1020 月饼
*/
#include <iostream>
#include <algorithm>

using namespace std;

struct Cakes
{
    double num;
    double price;
    double sprice;
} cakes[1000];

bool cmp(Cakes c1, Cakes c2)
{
    return c1.sprice > c2.sprice;
}

int main()
{
    int kind, total;
    cin >> kind >> total;
    
    for (int i = 0; i < kind; ++i)
        cin >> cakes[i].num;
    for (int i = 0; i < kind; ++i)
    {
        cin >> cakes[i].price;
        cakes[i].sprice = cakes[i].price / cakes[i].num;
    }
    
    sort(cakes, cakes + kind, cmp);
    double max = 0.0;
    for (int i = 0; i < kind; ++i)
    {
        if (total >= cakes[i].num)
        {
            total -= cakes[i].num;
            max += cakes[i].price;
        }
        else
        {
            max += total * cakes[i].sprice;
            break;
        }
    }
    
    printf("%0.2f", max);
    
    return 0;
}