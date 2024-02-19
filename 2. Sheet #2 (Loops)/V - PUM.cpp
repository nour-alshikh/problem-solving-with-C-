#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, ans = 1, x = 1;
    cin >> num;

    while (num)
    {
        if (ans / 4 != x)
        {
            cout << ans << " ";
            ans++;
        }
        else
        {
            cout << "PUM" << endl;
            ans++;
            num--;
            x++;
        }
    }
}

// #########################################################################

#include <bits/stdc++.h>
using namespace std;
int another()
{
    int num;
    cin >> num;
    for (int i = 1; i <= num * 4; i++)
    {
        if (i % 4 != 0)
        {
            cout << i << " ";
        }
        else
        {
            cout << "PUM" << endl;
        }
    }
}