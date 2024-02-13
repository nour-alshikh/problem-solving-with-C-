#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total;
    int even = 0, odd = 0, positive = 0, negative = 0, i = 1, num;
    cin >> total;
    while (i <= total)
    {
        cin >> num;
        if (num > 0)
        {
            positive++;
        }
        else if (num < 0)
        {
            negative++;
        }

        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        i++;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative << endl;
}