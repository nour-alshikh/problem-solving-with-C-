#include <bits/stdc++.h>
using namespace std;
int main()
{
    string eq;
    cin >> eq;
    char opr;
    string num1Str, num2Str;
    int oprIndex, num1, num2;

    for (int i = 0; i < eq.size(); i++)
    {
        if (eq[i] == '+' || eq[i] == '-' || eq[i] == '*' || eq[i] == '/')
        {
            opr = eq[i];
            oprIndex = i;
            break;
        }
    }

    num1Str = eq.substr(0, oprIndex);
    num2Str = eq.substr(oprIndex + 1);

    stringstream ss1;
    ss1 << num1Str;
    ss1 >> num1;
    stringstream ss2;
    ss2 << num2Str;
    ss2 >> num2;
    switch (opr)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 / num2 << endl;
        break;
    }
}