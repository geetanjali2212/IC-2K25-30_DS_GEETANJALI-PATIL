#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0, rear = -1;

    for(int i = 1; i <= 5; i++)
    {
        rear = (rear + 1) % 5;
        queue[rear] = i * 10;
    }

    cout << "Circular Queue:\n";

    for(int i = 0; i < 5; i++)
    {
        cout << queue[(front + i) % 5] << endl;
    }

    return 0;
}
