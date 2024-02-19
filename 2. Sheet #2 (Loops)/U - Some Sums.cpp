
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total, num1, num2, sum = 0;
    cin >> total >> num1 >> num2;

    for (int i = 1; i <= total; i++)
    {
        if (i / 10 == 0)
        {
            if (i >= num1 && i <= num2)
            {
                sum += i;
            }
        }
        else
        {
            int myNum = i, digit, numSum = 0;
            while (myNum)
            {
                digit = myNum % 10;
                numSum += digit;
                myNum /= 10;
            }
            if (numSum >= num1 && numSum <= num2)
            {
                sum += i;
            }
        }
    }
    cout << sum << endl;
}