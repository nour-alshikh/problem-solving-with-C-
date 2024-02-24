#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, flag = 0;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int k = 0; k <= size / 2; k++)
    {
        if (arr[k] != arr[size - 1 - k])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

// #####################################################################################

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, flag = 0;
    cin >> size;
    int arr[size];
    int end = size - 1;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int k = 0; k <= size / 2; k++)
    {
        if (arr[k] != arr[end])
        {
            flag = 1;
            break;
        }
        end--;
    }
    if (flag == 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}