#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}