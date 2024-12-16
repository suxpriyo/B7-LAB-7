#include <iostream>
using namespace std;

int main()
{
    int a[3][4], b[3][4],
        c[3][4] = {
            {0, 0, 0, 0},
            {0, 0, 0, 0},
            {0, 0, 0, 0},
        };
    int d[3][4] = {
        {1, 2, 3, 4},
        {11, 12, 13, 14},
        {21, 22, 23, 24},
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter the a" << i << j << ":";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter the b" << i << j << ":";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            d[i][j] = d[i][j] * c[i][j];
        }
    }

    // For showing the output
    cout << "Sum of A and B Matrix :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << c[i][j];
            cout << "\t";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Multiplication of matrix C & D :" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << d[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}