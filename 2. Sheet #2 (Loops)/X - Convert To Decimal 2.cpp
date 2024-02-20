#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int x, ones = 0;
        cin >> x;

        while (x)
        {
            if (x % 2 != 0)
            {
                ones++;
            }
            x /= 2;
        }
        int ans = 0;
        for (int j = 0; j < ones; j++)
        {
            ans = ans + pow(2, j);
        }
        cout << ans << endl;
    }
}