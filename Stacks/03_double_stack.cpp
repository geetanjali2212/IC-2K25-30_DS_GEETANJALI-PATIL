#include <iostream>
using namespace std;

int main()
{
    int a[10];
    int top1 = -1;
    int top2 = 10;

    a[++top1] = 10;
    a[++top1] = 20;

    a[--top2] = 50;
    a[--top2] = 40;

    cout << "Stack 1:\n";

    for(int i = top1; i >= 0; i--)
    {
        cout << a[i] << endl;
    }

    cout << "Stack 2:\n";

    for(int i = top2; i < 10; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}
