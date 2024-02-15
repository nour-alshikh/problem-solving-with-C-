#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, bStr;
    cin >> str;
    long long num, bNum;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        bStr = bStr + str[i];
    }

    stringstream ss1;
    ss1 << bStr;
    ss1 >> bNum;

    stringstream ss2;
    ss2 << str;
    ss2 >> num;

    if (num == bNum)
    {
        cout << bNum << endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << bNum << endl;
        cout << "NO" << endl;
    }
}