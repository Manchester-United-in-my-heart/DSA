#include <bits/stdc++.h>
using namespace std;

/*
    Task: Implement this tree
     1
  /  |   \
  2  3    4
  | \   / | \
  5  6 7  8   9
          | \
          10 11
*/

class Node
{
public:
    int data;
    Node *parent;
    Node *first_child;
    Node *sibling;
    Node()
    {
        data = 0;
        parent = NULL;
        first_child = NULL;
        sibling = NULL;
    }
    Node(int val)
    {
        data = val;
        parent = NULL;
        first_child = NULL;
        sibling = NULL;
    }

    void add_child(Node *child)
    {
        (*child).parent = this;
        first_child = child;
    }

    void add_sibling(Node *next_sibling)
    {
        (*next_sibling).parent = parent;
        sibling = next_sibling;
    }
};

int main()
{
    Node node1 = Node(1);
    Node node2 = Node(2);
    Node node3 = Node(3);
    Node node4 = Node(4);
    Node node5 = Node(5);
    Node node6 = Node(6);
    Node node7 = Node(7);
    Node node8 = Node(8);
    Node node9 = Node(9);
    Node node10 = Node(10);
    Node node11 = Node(11);
    node1.add_child(&node2);
    node2.add_sibling(&node3);
    node3.add_sibling(&node4);
    node2.add_child(&node5);
    node5.add_sibling(&node6);
    node4.add_child(&node7);
    node7.add_sibling(&node8);
    node8.add_sibling(&node9);
    node8.add_child(&node10);
    node10.add_sibling(&node11);
    return 0;
}