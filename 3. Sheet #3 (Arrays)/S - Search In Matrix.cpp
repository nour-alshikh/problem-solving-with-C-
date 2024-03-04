#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, columns;
    cin >> rows >> columns;
    int arr[rows][columns];
    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < columns; k++)
        {
            cin >> arr[i][k];
        }
    }

    int search, flag = 0;
    cin >> search;

    for (int i = 0; i < rows; i++)
    {
        for (int k = 0; k < columns; k++)
        {
            if (search == arr[i][k])
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag)
    {
        cout << "will not take number" << endl;
    }
    else
    {
        cout << "will take number" << endl;
    }
}