#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    char opt;

    cin >> num1 >> opt >> num2;

    switch (opt)
    {
    case '>':
        if (num1 > num2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case '<':
        if (num1 < num2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    case '=':
        if (num1 == num2)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
        break;
    }
}