#include <iostream>
using namespace std;

int main()
{
    int stack[5];
    int top = -1;

    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack Elements:\n";

    for(int i = top; i >= 0; i--)
    {
        cout << stack[i] << endl;
    }

    cout << "Top Element: " << stack[top];

    return 0;
}
