#include <iostream>
using namespace std;

int main()
{
    int a[5][4];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Enter the a" << i << j << ":";
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j];
            cout << "\t";
        }
        cout << endl;
    }
}