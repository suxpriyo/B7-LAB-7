#include <iostream>
using namespace std;

int main()
{
    int a[5][6], b[5][6],
        c[5][6] = {
            {0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0}};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Enter the a" << i << j << ":";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << "Enter the b" << i << j << ":";
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
    }

    // For showing the output
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << c[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}