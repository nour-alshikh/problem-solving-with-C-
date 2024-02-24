#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, ans, ind;
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        if (i == 0)
        {
            ans = num;
            ind = 1;
        }

        if (num < ans)
        {
            ans = num;
            ind = i + 1;
        }
    }

    cout << ans << " " << ind;
}