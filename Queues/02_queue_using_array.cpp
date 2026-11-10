#include <iostream>
using namespace std;

int main()
{
    int queue[5];
    int front = 0, rear = -1;

    queue[++rear] = 10;
    queue[++rear] = 20;
    queue[++rear] = 30;
    queue[++rear] = 40;

    cout << "Queue Elements:\n";

    for(int i = front; i <= rear; i++)
    {
        cout << queue[i] << endl;
    }

    return 0;
}
