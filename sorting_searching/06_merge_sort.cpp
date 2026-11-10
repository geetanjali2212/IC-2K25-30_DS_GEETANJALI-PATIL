#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r)
{
    int b[10], i = l, j = m + 1, k = 0;

    while(i <= m && j <= r)
    {
        if(a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }

    while(i <= m)
        b[k++] = a[i++];

    while(j <= r)
        b[k++] = a[j++];

    for(i = l, k = 0; i <= r; i++, k++)
        a[i] = b[k];
}

void sort(int a[], int l, int r)
{
    if(l < r)
    {
        int m = (l + r) / 2;
        sort(a, l, m);
        sort(a, m + 1, r);
        merge(a, l, m, r);
    }
}

int main()
{
    int a[5] = {50, 20, 40, 10, 30};

    sort(a, 0, 4);

    cout << "Sorted Array:\n";

    for(int i = 0; i < 5; i++)
        cout << a[i] << " ";

    return 0;
}
