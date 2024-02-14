#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total, num, max = 0;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        cin >> num;
        if (num > max)
        {
            max = num;
        }
    }
    cout << max;
}