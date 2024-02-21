
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int turns, size;
    cin >> turns >> size;
    int flag = 1;

    for (int i = 1; i <= turns; i++)
    {
        int num, min;
        cin >> num;

        if (flag)
        {
            min = num;
            flag = 0;
        }
        else
        {
            if (num < min)
            {
                min = num;
            }
        }

        if ((i % size == 0 && i != 0) || i == turns)
        {
            cout << min << " ";
            flag = 1;
        }
    }
}