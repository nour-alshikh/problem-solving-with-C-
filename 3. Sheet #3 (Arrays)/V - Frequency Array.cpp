#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size, counterSize;
    cin >> size >> counterSize;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int counterArr[counterSize];

    for (int x = 0; x < counterSize; x++)
    {
        counterArr[x] = 0;
    }

    int temp;

    for (int k = 0; k < size; k++)
    {
        temp = arr[k];
        counterArr[temp - 1] = counterArr[temp - 1] + 1;
    }

    for (int s = 0; s < counterSize; s++)
    {
        cout << counterArr[s] << endl;
    }
}
