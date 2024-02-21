#include <bits/stdc++.h>
using namespace std;
int main()
{
    int turns, ans = 0;
    cin >> turns;

    for (int i = 0; i < turns; i++)
    {
        long long num;
        cin >> num;
        long long x = 0;
        while (num > 0)
        {
            if (num % 2 == 0)
            {
                num /= 2;
                x++;
                if (x > ans)
                {
                    ans = x;
                }
            }
            else
            {
                break;
            }
        }
        x = 0;
    }
    cout << ans << endl;
}