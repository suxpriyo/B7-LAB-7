#include <iostream>
using namespace std;

int main()
{
    int a[4][5], b[4][5],
        c[4][5] = {
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the a" << i << j << ":";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Enter the b" << i << j << ":";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // For showing the output
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << c[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}