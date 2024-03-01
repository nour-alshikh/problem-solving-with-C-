#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, result;
    cin >> size;
    int arrA[size];
    int arrB[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arrA[i];
    }
    sort(arrA, arrA + size);
    for (int i = 0; i < size; i++)
    {
        cin >> arrB[i];
    }
    sort(arrB, arrB + size);

    for (int x = 0; x < size; x++)
    {
        if (arrA[x] != arrB[x])
        {
            cout << "no";
            return 0;
        }
    }

    cout << "yes";
}