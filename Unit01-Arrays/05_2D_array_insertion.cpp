#include <iostream>
using namespace std;

int main()
{
    int a[3][3], r, c, value;

    // Input elements
    cout << "Enter 9 elements: ";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
    }

    // Insert value
    cout << "Enter row and column: ";
    cin >> r >> c;

    cout << "Enter value: ";
    cin >> value;

    if(r >= 1 && r <= 3 && c >= 1 && c <= 3)
        a[r-1][c-1] = value;
    else
    {
        cout << "Invalid position!";
        return 0;
    }

    // Display array
    cout << "Updated array:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
