#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, res;
    char opt, eq;

    cin >> num1 >> opt >> num2 >> eq >> res;
    switch (opt)
    {
    case '+':
        if (num1 + num2 == res)
        {
            cout << "Yes";
        }
        else
        {
            cout << num1 + num2;
        }
        break;
    case '-':
        if (num1 - num2 == res)
        {
            cout << "Yes";
        }
        else
        {
            cout << num1 - num2;
        }
        break;
    case '*':
        if (num1 * num2 == res)
        {
            cout << "Yes";
        }
        else
        {
            cout << num1 * num2;
        }
    }
}