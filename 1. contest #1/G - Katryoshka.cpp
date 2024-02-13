
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long eyes, mouths, bodies, res;

    cin >> eyes >> mouths >> bodies;

    if (bodies == 0 || eyes == 0)
    {
        cout << 0 << endl;
    }
    else
    {

        if ((mouths >= bodies && mouths >= eyes) || (mouths >= bodies && mouths < eyes) || (mouths < bodies && mouths >= eyes))
        {
            res = min(eyes, bodies);
            cout << res;
        }
        else if ((mouths < bodies && mouths < eyes))
        {
            res = mouths;
            eyes -= mouths;
            bodies -= mouths;
            res += (min(eyes / 2, bodies));
            cout << res;
        }
    }
}
