
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 >= num3)
        {
            cout << num3 << "\n"
                 << num2 << "\n"
                 << num1 << endl;
            cout << endl;
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
        }
        else
        {
            cout << num2 << "\n"
                 << num3 << "\n"
                 << num1 << endl;
            cout << endl;
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
        }
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 >= num3)
        {
            cout << num3 << "\n"
                 << num1 << "\n"
                 << num2 << endl;
            cout << endl;
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
        }
        else
        {
            cout << num1 << "\n"
                 << num3 << "\n"
                 << num2 << endl;
            cout << endl;
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
        }
    }
    else
    {
        if (num1 >= num2)
        {
            cout << num2 << "\n"
                 << num1 << "\n"
                 << num3 << endl;
            cout << endl;
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
        }
        else
        {
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
            cout << endl;
            cout << num1 << "\n"
                 << num2 << "\n"
                 << num3 << endl;
        }
    }
}