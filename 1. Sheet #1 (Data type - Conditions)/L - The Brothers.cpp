#include <bits/stdc++.h>
using namespace std;
int main()
{
    string personOneFirstName, personOneSecondName, personTwoFirstName, personTwoSecondName;

    cin >> personOneFirstName >> personOneSecondName >> personTwoFirstName >> personTwoSecondName;

    if (personOneSecondName == personTwoSecondName)
    {
        cout << "ARE Brothers" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
}