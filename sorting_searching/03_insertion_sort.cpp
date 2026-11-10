#include <iostream>
using namespace std;

int main()
{
    int a[5] = {50, 20, 40, 10, 30};
    int key, j;

    for(int i = 1; i < 5; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = key;
    }

    cout << "Sorted Array:\n";

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
