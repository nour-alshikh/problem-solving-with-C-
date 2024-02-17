#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string x;
        cin >> x;

        for (int j = x.size() - 1; j >= 0; j--)
        {
            cout << x[j] << " ";
        }
        cout << endl;
    }
}