#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, first = 0, second = 1;
    cin >> num;

    if (num == 1)
    {
        cout << first;
        return 0;
    }
    else if (num == 2)
    {
        cout << first << " " << second;
        return 0;
    }
    else
    {
        cout << first << " " << second << " ";
    }

    for (int i = 3; i <= num; i++)
    {
        int ans = first + second;

        cout << ans << " ";

        first = second;
        second = ans;
    }
}