#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = num; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
