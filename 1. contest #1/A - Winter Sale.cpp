#include <bits/stdc++.h>
using namespace std;
int main()
{
    double dis, priceAfter;

    cin >> dis >> priceAfter;

    double priceBeforeDis = 100 * priceAfter / (100 - dis);

    cout << priceBeforeDis << endl;
}