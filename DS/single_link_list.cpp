#include <bits/stdc++.h>
using namespace std;

class Node
{
    int val;
    Node *next_node;

public:
    Node(int new_val, Node *nextnode)
    {
        val = new_val;
        next_node = nextnode;
    }
    int set_value(int new_val)
    {
        val = new_val;
    }
    int get_value()
    {
        return this->val;
    }
};

class LinkedList
{
    Node head;

public:
    LinkedList(int new_val)
    {
        head = Node(new_val, NULL);
    }
    void insert(Node *nextnode, int new_val)
    {
    }
};

int main()
{
    Node node1 = Node(1, NULL);
    Node node2 = Node(2, &node1);
    return 0;
}