#include <bits/stdc++.h>
using namespace std;
int res[1000005];
int main()
{
    long long turns;
    long long cou = 0;
    cin >> turns;

    for (int i = 0; i < turns; i++)
    {
        long long n, s;
        cin >> n >> s;

        if (n * (n + 1) / 2 < s)
        {
            cout << -1;
        }
        else
        {
            long long sum = 0;

            for (int k = n; k >= 1; k--)
            {
                if (k + sum <= s)
                {
                    sum += k;
                    res[cou] = k;
                    cou++;
                }
                else if (sum == s)
                {
                    break;
                }
            }
        }
        for (int x = 0; x < cou; x++)
        {
            cout << res[x] << " ";
        }
        cout << endl;
        cou = 0;
    }
}