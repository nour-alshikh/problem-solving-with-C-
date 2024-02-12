#include <bits/stdc++.h>
using namespace std;
int main()
{
    char letter, ans;
    cin >> letter;

    if (letter == 122)
    {
        ans = 97;
        cout << ans;
    }
    else
    {
        ans = letter + 1;
        cout << ans;
    }
}
