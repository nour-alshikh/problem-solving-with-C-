#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    long long sum = 0;
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << abs(sum) << endl;
}