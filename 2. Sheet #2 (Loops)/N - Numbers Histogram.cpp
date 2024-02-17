#include <bits/stdc++.h>
using namespace std;
int main()
{
    char sym;
    int total;
    cin >> sym;
    cin >> total;
    for (int i = 1; i <= total; i++)
    {
        int x;
        cin >> x;
        for (int j = 1; j <= x; j++)
        {
            cout << sym;
        }
        cout << endl;
    }
}