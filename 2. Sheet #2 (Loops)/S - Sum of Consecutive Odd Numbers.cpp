#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    cin >> total;
    for (int i = 0; i < total; i++)
    {
        int x, y;
        cin >> x >> y;

        int mi, ma;
        mi = min(x, y);
        ma = max(x, y);
        int sum = 0;
        for (int j = mi + 1; j < ma; j++)
        {
            if (j % 2 != 0)
            {
                sum += j;
            }
        }
        cout << sum << endl;
    }
}