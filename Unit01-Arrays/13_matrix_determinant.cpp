#include <iostream>
using namespace std;

int main()
{
    int a[2][2] = {
        {4, 3},
        {2, 5}
    };

    int det;

    det = (a[0][0] * a[1][1]) -
          (a[0][1] * a[1][0]);

    cout << "Matrix:\n";

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
            cout << a[i][j] << " ";

        cout << endl;
    }

    cout << "Determinant: " << det;

    return 0;
}
