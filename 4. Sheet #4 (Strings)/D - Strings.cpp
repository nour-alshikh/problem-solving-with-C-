#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st1, st2;
    char temp1, temp2;
    cin >> st1 >> st2;

    cout << st1.size() << " " << st2.size() << endl;
    cout << st1 << st2 << endl;
    temp1 = st1[0];
    temp2 = st2[0];
    st1[0] = temp2;
    st2[0] = temp1;
    cout << st1 << " " << st2 << endl;
}