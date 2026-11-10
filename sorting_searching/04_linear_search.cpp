#include <iostream>
using namespace std;

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int key = 30, found = 0;

    for(int i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            cout << "Element found at position: " << i + 1;
            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "Element not found!";

    return 0;
}
