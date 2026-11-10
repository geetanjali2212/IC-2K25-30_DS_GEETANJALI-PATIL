#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {0, 0, 5},
        {0, 8, 0},
        {3, 0, 0}
    };

    cout << "Sparse Matrix (Row Column Value):\n";

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] != 0)
            {
                cout << i + 1 << " ";
                cout << j + 1 << " ";
                cout << a[i][j] << endl;
            }
        }
    }

    return 0;
}
