#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows, columns;
    cin >> rows >> columns;
    char arr[101][101];
    for (int i = 1; i <= rows; i++)
    {
        for (int k = 1; k <= columns; k++)
        {
            cin >> arr[i][k];
        }
    }

    int posX, posY;
    cin >> posX >> posY;

    if (arr[posX - 1][posY] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX - 1][posY - 1] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX - 1][posY + 1] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX + 1][posY] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX + 1][posY - 1] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX + 1][posY + 1] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX][posY - 1] == '.')
    {
        cout << "no";
        return 0;
    }
    if (arr[posX][posY + 1] == '.')
    {
        cout << "no";
        return 0;
    }

    cout << "yes";
}

// ########################################################################################
// why wrong answer?

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int rows, columns;
//     cin >> rows >> columns;
//     char arr[102][102];
//     for (int i = 1; i <= rows; i++)
//     {
//         for (int k = 1; k <= columns; k++)
//         {
//             cin >> arr[i][k];
//         }
//     }

//     int posX, posY;
//     cin >> posX >> posY;

//     for (int x = posX - 1; x <= posX + 1; x++)
//     {
//         for (int y = posY - 1; y <= posY + 1; y++)
//         {
//             if (arr[x][y] == '.' && x != posX && y != posY)
//             {
//                 cout << "no";
//                 return 0;
//             }
//         }
//     }
//     cout << "yes";
// }