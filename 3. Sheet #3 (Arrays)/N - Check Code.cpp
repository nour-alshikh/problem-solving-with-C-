#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, counter = 0;
    cin >> num1 >> num2;

    string myChar;
    cin >> myChar;

    if (myChar.size() == num1 + num2 + 1 && myChar[num1] == '-')
    {
        for (int i = 0; i < myChar.size(); i++)
        {
            if (myChar[i] <= 57 && myChar[i] >= 48 && i != num1)
            {
                counter++;
            }
        }
    }
    else
    {
        cout << "No";
        return 0;
    }

    if (counter == num1 + num2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}