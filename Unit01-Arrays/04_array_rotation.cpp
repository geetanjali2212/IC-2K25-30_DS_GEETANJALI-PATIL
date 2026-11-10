#include <iostream>
using namespace std;

int main()
{
    int a[50], n, i, temp;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    temp = a[0];

    for(i = 0; i < n - 1; i++)
        a[i] = a[i + 1];

    a[n - 1] = temp;

    cout << "Rotated array: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
