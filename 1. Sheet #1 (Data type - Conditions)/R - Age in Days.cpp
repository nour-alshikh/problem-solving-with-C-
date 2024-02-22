#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cin >> age;

    int years = age / 365;

    int months = (age - years * 365) / 30;

    int days = age - (years * 365 + months * 30);

    cout << ceil(years) << " years" << endl;
    cout << ceil(months) << " months" << endl;
    cout << ceil(days) << " days" << endl;
}