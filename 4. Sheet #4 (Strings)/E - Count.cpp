#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int sum = 0;
    cin >> st;
    for (int i = 0; i < st.size(); i++)
    {
        sum += st[i] - '0';
    }

    cout << sum;
}