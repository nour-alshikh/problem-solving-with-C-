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
        }
        for (int k = 1; k <= size; k++)
        {
            for (int j = k + 1; j <= size; j++)
            {
                result = arr[k - 1] + arr[j - 1] + j - k;

                if (flag == 0 && result < min)
                {
                    min = result;
                }

                if (flag)
                {
                    min = result;
                    flag = 0;
                }
                result = 0;
            }
        }
        cout << min << endl;
        flag = 1;
    }
}