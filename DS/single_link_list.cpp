#include <bits/stdc++.h>
using namespace std;

class Node
{
    int val;
    Node *next_node;

public:
    Node()
    {
        val = 0;
        next_node = NULL;
    }
    Node(int new_val, Node *nextnode)
    {
        val = new_val;
        next_node = nextnode;
    }
    void set_value(int new_val)
    {
        val = new_val;
    }
    int get_value()
    {
        return this->val;
    }

    void set_next_node(Node *node)
    {
        next_node = node;
    }

    Node *get_next_node()
    {
        return next_node;
    }
};

class LinkedList
{

    Node *head;

public:
    Node *get_head()
    {
        return head;
    };
    void set_head(Node *new_head)
    {
        head = new_head;
    }
    LinkedList(int new_val)
    {
        head = new Node(new_val, NULL);
    };
    void push_back(int new_val)
    {
        Node *search = this->get_head();
        while ( (*search).get_next_node() != NULL ) {
            search = (*search).get_next_node();
        }
        Node new_node = Node(new_val, NULL);
        search->set_next_node(&new_node);
    }
    void insert(Node *nextnode, int new_val)
    {
        if (nextnode == head)
        {
            Node new_node = Node(new_val, head);
            this->set_head(&new_node);
        }
        else
        {
            Node search = *this->get_head();
            while (&search != NULL && search.get_next_node() != nextnode)
            {
                search = *search.get_next_node();
            }
            if (&search == NULL)
            {
                cout << "Exit without changed";
            }
            else
            {
                Node new_node = Node(new_val, search.get_next_node());
                search.set_next_node(&new_node);
                cout << "Changed";
            }
        }
    }
};

int main()
{
    LinkedList list1 = LinkedList(10);
    list1.push_back(20);
    list1.push_back(30);
    Node *head = (*list1.get_head()).get_next_node();
    list1.insert(head, 15);
    return 0;
}