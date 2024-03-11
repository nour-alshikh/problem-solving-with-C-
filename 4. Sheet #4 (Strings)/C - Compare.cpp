#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st1, st2;
    cin >> st1 >> st2;

    int size1 = st1.size();
    int size2 = st2.size();
    int size = min(size1, size2);
    int flag = 0;

    for (int i = 0; i < size; i++)
    {
        if (st1[i] < st2[i])
        {
            cout << st1;
            flag = 0;
            break;
        }
        else if (st2[i] < st1[i])
        {
            cout << st2;
            flag = 0;
            break;
        }
        else
        {
            flag = -1;
        }
    }
    if (flag == -1)
    {
        if (size1 < size2)
        {
            cout << st1;
        }
        else
        {
            cout << st2;
        }
    }
}