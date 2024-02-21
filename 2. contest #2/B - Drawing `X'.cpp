#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {

        for (int k = 0; k < num; k++)
        {
            if (i == num / 2 && k == num / 2)
            {
                cout << "X";
            }
            else if (i == k && i != num / 2 && k != num / 2)
            {
                cout << "\\";
            }
            else if (i + k == num - 1)
            {
                cout << "/";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}