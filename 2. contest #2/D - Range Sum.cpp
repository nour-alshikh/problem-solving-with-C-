#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long turns;
    cin >> turns;
    while (turns--)
    {
        long long num1, num2, mi, ma;
        cin >> num1 >> num2;
        mi = min(num1, num2);
        ma = max(num1, num2);

        mi--;
        long long ans = (ma * (ma + 1) / 2) - (mi * (mi + 1) / 2);
        cout << ans << endl;
    }
}