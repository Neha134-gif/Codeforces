#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    // constructor to initialize new node
    Node(int val) : data(val), next(nullptr) {}
};
Node *arrayToLL(int arr[], int size)
{
    if (size == 0)
        return nullptr;
    Node *head = new Node(arr[0]);
    Node *current = head;
    for (int i = 1; i < size; i++)
    {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}
void printLL(Node *head)
{
    Node *current = head;
    while (current != nullptr)
    {
        cout << current->data << endl;
        current = current->next;
    }
    cout << "nullptr" << endl;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    Node *head = arrayToLL(arr, size);
    printLL(head);
    return 0;
}