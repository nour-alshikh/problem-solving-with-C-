
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long num1, num2, k;

    cin >> num1 >> num2 >> k;

    if (num1 % k == 0 && num2 % k == 0)
    {
        cout << "Both" << endl;
    }
    else if (num1 % k == 0 && num2 % k != 0)
    {
        cout << "Memo" << endl;
    }
    else if (num1 % k != 0 && num2 % k == 0)
    {
        cout << "Momo" << endl;
    }
    else
    {
        cout << "No One" << endl;
    }
}