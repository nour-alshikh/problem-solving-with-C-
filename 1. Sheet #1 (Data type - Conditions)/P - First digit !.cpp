#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, fDigit;
    cin >> num;
    fDigit = ceil(num / 1000);
    if (fDigit % 2 == 0)
    {
        cout << "EVEN" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }
}