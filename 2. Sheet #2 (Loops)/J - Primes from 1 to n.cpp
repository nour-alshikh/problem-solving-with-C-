#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, flag = 0;
    cin >> num;

    for (int i = 2; i <= num; i++)
    {

        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << i << " ";
        }
        else
        {
            flag = 0;
        }
    }
}

// ######################################################################################

int prime(int num)
{
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return -1;
        }
    }
    return num;
}

int main()
{
    int counter;
    cin >> counter;

    for (int i = 1; i <= counter; i++)
    {
        int res = prime(i);
        if (res != -1)
        {
            cout << res << " ";
        }
    }
}