
#include <bits/stdc++.h>
using namespace std;
int main()
{

    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == ',')
        {
            cout << " ";
        }

        if (st[i] <= 'z' && st[i] >= 'a')
        {
            char res = st[i] - 32;
            cout << res;
        }
        else if (st[i] <= 'Z' && st[i] >= 'A')
        {
            char res = st[i] + 32;
            cout << res;
        }
    }
}