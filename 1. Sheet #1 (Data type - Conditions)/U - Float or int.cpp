
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float num;
    cin >> num;

    int ans = num;
    if (ans == num)
    {
        cout << "int " << ans << endl;
    }
    else
    {
        cout << "float " << ans << " " << num - ans << endl;
    }
}