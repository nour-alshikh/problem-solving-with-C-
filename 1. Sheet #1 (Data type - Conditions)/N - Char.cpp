#include <bits/stdc++.h>
using namespace std;
int main()
{
    char myChar, finalChar;
    cin >> myChar;
    if (myChar >= 97 && myChar <= 122)
    {
        finalChar = myChar - 32;
        cout << finalChar << endl;
    }
    else if (myChar >= 65 && myChar <= 90)
    {
        finalChar = myChar + 32;
        cout << finalChar << endl;
    }
}