#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long size, sum = 0;
    cin >> size;
    string value;
    cin >> value;

    for (int k = 0; k < size; k++)
    {
        sum += value[k] - '0';
    }
    cout << sum;
}