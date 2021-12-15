/*
1035 插入与归并
*/
#include <iostream>
#include <algorithm>

using namespace std;

bool IsEqual(int a[], int b[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}

void nextPrint(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << a[i];
        if (i != n - 1)
            cout << " ";
    }
}

bool IsInsSort(int a[], int b[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        sort(a, a + i + 1);
        if (IsEqual(a, b, n))
        {
            sort(a, a + i + 2);
            return true;
        }
    }
    return false;
}

bool IsMerSort(int a[], int b[], int n)
{
    for (int i = 2; i / 2 <= n; i *= 2)
    {
        for (int j = 0; j < n; j += i)
            sort(a + j, a + min(i + j, n));
        if (IsEqual(a, b, n))
        {
            i *= 2;
            for (int j = 0; j < n; j += i)
                sort(a + j, a + min(i + j, n));
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    int a1[100], a2[100], b[100];
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        cin >> a1[i];
        a2[i] = a1[i];
    }
    for (int i = 0; i < n; ++i)
        cin >> b[i];
    
    if (IsInsSort(a1, b, n))
    {
        cout << "Insertion Sort" << endl;
        nextPrint(a1, n);
    }
    else if (IsMerSort(a2, b, n))
    {
        cout << "Merge Sort" << endl;
        nextPrint(a2, n);
    }
    
    return 0;
}