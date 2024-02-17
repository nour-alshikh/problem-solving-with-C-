#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1, num2, flag = 0, luckyNumbers[100000] = {0};

    luckyNumbers[4] = 1;
    luckyNumbers[7] = 1;
    luckyNumbers[44] = 1;
    luckyNumbers[47] = 1;
    luckyNumbers[74] = 1;
    luckyNumbers[77] = 1;
    luckyNumbers[444] = 1;
    luckyNumbers[447] = 1;
    luckyNumbers[474] = 1;
    luckyNumbers[477] = 1;
    luckyNumbers[744] = 1;
    luckyNumbers[747] = 1;
    luckyNumbers[774] = 1;
    luckyNumbers[777] = 1;
    luckyNumbers[4444] = 1;
    luckyNumbers[4447] = 1;
    luckyNumbers[4474] = 1;
    luckyNumbers[4477] = 1;
    luckyNumbers[4744] = 1;
    luckyNumbers[4747] = 1;
    luckyNumbers[4774] = 1;
    luckyNumbers[4777] = 1;
    luckyNumbers[7444] = 1;
    luckyNumbers[7447] = 1;
    luckyNumbers[7474] = 1;
    luckyNumbers[7477] = 1;
    luckyNumbers[7744] = 1;
    luckyNumbers[7747] = 1;
    luckyNumbers[7774] = 1;
    luckyNumbers[7777] = 1;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (luckyNumbers[i] == 1)
        {
            cout << i << " ";
            flag = 1;
        }
    }
    if (flag == 0)
    {
        cout << -1 << endl;
    }
}