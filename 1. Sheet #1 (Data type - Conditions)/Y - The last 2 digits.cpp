#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, num3, num4;

    cin >> num1 >> num2 >> num3 >> num4;

    int newNum1 = num1 % 100;
    int newNum2 = num2 % 100;
    int newNum3 = num3 % 100;
    int newNum4 = num4 % 100;
    int res = newNum1 * newNum2 * newNum3 * newNum4 % 100;

    if (res <= 9)
    {
        cout << "0" << res;
    }
    else
    {
        cout << res;
    }
}