#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = NULL;
    }

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList
{
    Node *head;

public:
    LinkedList() { head = NULL; }
    void insertNode(int);
    void printList();
    void deleteNode(int);
};

void LinkedList::insertNode(int data)
{
    Node *new_node = new Node(data);

    while (head == NULL)
    {
        head = new_node;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void LinkedList::deleteNode(int data)
{
    Node *temp = this->head;

    if ((*temp).data == data)
    {
        *temp = *(temp->next);
        return;
    }

    while (temp->next != NULL && (*(*temp).next).data != data)
    {
        temp = temp->next;
    }

    if (temp->next == NULL)
        return;
    (*temp).next = (*((*temp).next)).next;
}

int main()
{
    LinkedList ll = LinkedList();
    ll.insertNode(10);
    ll.insertNode(20);
    ll.insertNode(30);
    ll.deleteNode(50);
    return 0;
}