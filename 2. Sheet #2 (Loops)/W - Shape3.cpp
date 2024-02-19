
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int spaces = num - 1;
    for (int i = 1; i <= num; i++)
    {
        for (int i = 1; i <= spaces; i++)
        {
            cout << " ";
        }

        for (int k = 1; k < i * 2; k++)
        {
            cout << "*";
        }

        spaces--;
        cout << endl;
    }

    spaces = 1;

    for (int x = num; x >= 1; x--)
    {
        for (int x = 1; x < spaces; x++)
        {
            cout << " ";
        }

        for (int y = x * 2; y > 1; y--)
        {
            cout << "*";
        }
        spaces++;
        cout << endl;
    }
}