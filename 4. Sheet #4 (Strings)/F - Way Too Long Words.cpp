
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        string st;
        cin >> st;

        int stSize = st.size();
        if (st.size() <= 10)
        {
            cout << st << endl;
        }
        else
        {
            cout << st[0];
            cout << stSize - 2;
            cout << st[stSize - 1] << endl;
        }
    }
}