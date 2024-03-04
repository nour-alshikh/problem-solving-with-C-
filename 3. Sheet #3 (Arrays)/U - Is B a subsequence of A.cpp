#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    int subArr[m];

    for (int x = 0; x < n; x++)
    {
        cin >> arr[x];
    }

    for (int z = 0; z < m; z++)
    {
        cin >> subArr[z];
    }

    int t = 0, counter = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == subArr[t])
        {
            counter++;
            t++;
        }
    }
    if (counter == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}