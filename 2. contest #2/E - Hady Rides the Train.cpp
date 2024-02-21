#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long id, row, column;
    cin >> id;
    row = id / 4;
    if (row % 2 == 0)
    {
        column = id % 4;
    }
    else
    {
        column = 3 - (id % 4);
    }
    cout << row << " " << column;
}