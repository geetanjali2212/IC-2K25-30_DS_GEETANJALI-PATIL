#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* first = new Node{10, NULL};
    Node* second = new Node{20, NULL};
    Node* third = new Node{30, NULL};

    first->next = second;
    second->next = third;
    third->next = first;

    Node* temp = first;

    cout << "Circular Linked List:\n";

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != first);

    return 0;
}
