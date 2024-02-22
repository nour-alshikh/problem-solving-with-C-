#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int flag = 0;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int search;
    cin >> search;

    for (int k = 0; k < size; k++)
    {
        if (arr[k] == search)
        {
            cout << k << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
}