#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long aMultib = a * b;
    long long bMultic = b * c;
    long long aPlusb = a + b;
    long long aMinusb = a - b;

    if (aMultib + c == d || aMultib - c == d)
    {
        cout << "YES" << endl;
    }
    else if (a + bMultic == d || a - bMultic == d)
    {
        cout << "YES" << endl;
    }
    else

        if (aPlusb * c == d || aPlusb - c == d)
    {
        cout << "YES" << endl;
    }
    else if (aMinusb + c == d || aMinusb * c == d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}