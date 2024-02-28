#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases, result, min, flag = 1;
    cin >> testCases;
    while (testCases--)
    {
        int size;
        cin >> size;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
            cout << arr[i] << " ";
        }

        for (int k = 0; k < size; k++)
        {
            int ans = arr[k];
            for (int x = k + 1; x < size; x++)
            {
                if (arr[x] > ans)
                {
                    ans = arr[x];
                    cout << ans << " ";
                }
                else
                {
                    cout << ans << " ";
                }
            }
        }
        cout << endl;
    }
}