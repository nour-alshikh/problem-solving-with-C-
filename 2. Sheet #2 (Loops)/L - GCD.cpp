#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 == num2)
    {
        cout << num1 << endl;
        return 0;
    }
    else if (num1 > num2)
    {
        for (int i = num2; i > 0; i--)
        {
            if (num1 % i == 0 && num2 % i == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    else if (num1 < num2)
    {
        for (int i = num1; i > 0; i--)
        {
            if (num2 % i == 0 && num1 % i == 0)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
}
