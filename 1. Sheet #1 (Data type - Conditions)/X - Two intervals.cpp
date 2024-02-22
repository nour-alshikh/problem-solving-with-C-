#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    if ((num1 > num3 && num1 > num4) || (num2 < num3 && num2 < num4))
    {
        cout << -1 << endl;
    }
    else
    {
        if (num1 >= num3 && num2 <= num4)
        {
            cout << num1 << " " << num2;
        }
        else if (num1 >= num3 && num2 >= num4)
        {
            cout << num1 << " " << num4;
        }
        else if (num1 <= num3 && num2 <= num4)
        {
            cout << num3 << " " << num2;
        }
        else if (num1 <= num3 && num2 >= num4)
        {
            cout << num3 << " " << num4;
        }
    }
}