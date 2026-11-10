#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Rotated 2D Array:\n";

    for(int j = 0; j < 3; j++)
    {
        for(int i = 2; i >= 0; i--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
