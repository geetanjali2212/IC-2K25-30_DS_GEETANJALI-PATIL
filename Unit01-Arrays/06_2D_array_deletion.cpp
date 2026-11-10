#include <iostream>
using namespace std;

int main()
{
    int a[3][3], r, c;

    cout << "Enter 9 elements: ";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
    }
  
    cout << "Enter row and column: ";
    cin >> r >> c;

    if(r >= 1 && r <= 3 && c >= 1 && c <= 3)
        a[r-1][c-1] = 0;
    else
    {
        cout << "Invalid position!";
        return 0;
    }
    cout << "Updated array:\n";
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }

    return 0;
}
