#include <bits/stdc++.h>
using namespace std;
int main()
{

    int testCases;
    cin >> testCases;

    while (testCases--)
    {
        int flag = 0;
        string st;
        cin >> st;
        for (int i = 0; i < st.size() - 2; i++)
        {
            if ((st[i] == '0' && st[i + 1] == '1' && st[i + 2] == '0') || (st[i] == '1' && st[i + 1] == '0' && st[i + 2] == '1'))
            {
                flag = 1;
                break;
            }
        }

        if (flag)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
}