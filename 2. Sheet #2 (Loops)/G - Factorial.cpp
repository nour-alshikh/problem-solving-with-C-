#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    cin >> total;

    for (int i = 0; i < total; i++)
    {

        int num;
        cin >> num;
        long long fac = 1;
        for (int j = 1; j <= num; j++)
        {
            fac = fac * j;
        }
        cout << fac << endl;
        fac = 1;
    }
}