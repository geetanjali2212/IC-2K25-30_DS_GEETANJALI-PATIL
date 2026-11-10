#include <iostream>
using namespace std;

int main()
{
    int a[5] = {40, 10, 50, 20, 30};
    int min, temp;

    for(int i = 0; i < 4; i++)
    {
        min = i;

        for(int j = i + 1; j < 5; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    cout << "Sorted Array:\n";

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
