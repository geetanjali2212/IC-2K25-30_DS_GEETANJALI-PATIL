#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    int key = 50, found = 0;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            if(a[i][j] == key)
            {
                cout << "Element found at row: " << i + 1;
                cout << " and column: " << j + 1;
                found = 1;
            }
        }
    }

    if(found == 0)
        cout << "Element not found!";

    return 0;
}
