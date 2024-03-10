#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);

    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == '\\')
        {
            break;
        }
        cout << st[i];
    }
}