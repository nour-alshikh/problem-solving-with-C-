#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;

    cin >> num;

    int sNum = num % 10;
    int fNum = (num - sNum) / 10;

    if (fNum == 0 || sNum == 0 || fNum % sNum == 0 || sNum % fNum == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}