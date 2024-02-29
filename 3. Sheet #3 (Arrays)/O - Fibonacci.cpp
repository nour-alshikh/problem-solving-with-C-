#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, first = 0, second = 1;
    cin >> size;

    if (size == 1)
    {
        cout << first;
    }
    else if (size == 2)
    {
        cout << second;
    }
    else
    {
        long long res = 0;
        for (int i = 3; i <= size; i++)
        {
            res = first + second;
            first = second;
            second = res;
        }
        cout << res;
    }
}
