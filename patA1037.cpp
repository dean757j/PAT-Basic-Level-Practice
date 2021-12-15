/*
1037 在霍格沃茨找零钱 
*/
#include <iostream>

using namespace std;

struct Money
{
    int galleon;
    int sickle;
    int knut;
};

int cmp(Money a, Money b)
{
    if (a.galleon != b.galleon)
    {
        if (a.galleon > b.galleon)
            return 1;
        else
            return -1;
    }
    else
    {
        if (a.sickle != b.sickle)
        {
            if (a.sickle > b.sickle)
                return 1;
            else
                return -1;
        }
        else
        {
            if (a.knut != b.knut)
            {
                if (a.knut > b.knut)
                    return 1;
                else
                    return -1;
            }
        }
    }
    return 0;
}

void charge(Money a, Money b, Money& rst)
{
    if (a.knut < b.knut)
    {
        --a.sickle;
        a.knut += 29;
    }
    rst.knut = a.knut - b.knut;
    if (a.sickle < b.sickle)
    {
        --a.galleon;
        a.sickle += 17;
    }
    rst.sickle = a.sickle - b.sickle;
    rst.galleon = a.galleon - b.galleon;
}

int main()
{
    Money p, a, rst;
    scanf("%d.%d.%d %d.%d.%d", &p.galleon, &p.sickle, &p.knut, &a.galleon, &a.sickle, &a.knut);
    
    if (0 == cmp(p, a))
    {
        rst.galleon = 0;
        rst.sickle = 0;
        rst.knut = 0;
    }
    else if (1 == cmp(p, a))
    {
        charge(p, a, rst);
        cout << "-";
    }
    else if (-1 == cmp(p, a))
        charge(a, p, rst);
    
    cout << rst.galleon << "." << rst.sickle << "." << rst.knut;
    return 0;
}