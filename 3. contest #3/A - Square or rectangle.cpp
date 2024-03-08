#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cases;
    cin >> cases;

    while (cases--)
    {
        int width, height;
        cin >> width >> height;

        if (width == height)
        {
            cout << "Square" << endl;
        }
        else
        {
            cout << "Rectangle" << endl;
        }
    }
}