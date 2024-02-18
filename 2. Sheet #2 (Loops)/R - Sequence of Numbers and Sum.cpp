
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2;
    while (cin >> num1 >> num2)
    {

        if (num1 <= 0 || num2 <= 0)
        {
            return 0;
        }

        if (num1 < num2)
        {
            int temp = num1;
            num1 = num2;
            num2 = temp;
        }
        int sum = 0;
        for (int i = num2; i <= num1; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << endl;
    }
}