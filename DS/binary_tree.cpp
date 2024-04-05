#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string data;
    Node *parent;
    Node *left_child;
    Node *right_child;

    Node()
    {
        data = "";
        parent = NULL;
        left_child = NULL;
        right_child = NULL;
    }

    Node(string val)
    {
        data = val;
        parent = NULL;
        left_child = NULL;
        right_child = NULL;
    }

    Node(string val, Node *parent_node)
    {
        data = val;
        parent = parent_node;
        left_child = NULL;
        right_child = NULL;
    }

    void add_left_child(Node *left_node)
    {
        left_child = left_node;
        (*left_node).parent = this;
    }
    void add_right_child(Node *right_node)
    {
        right_child = right_node;
        (*right_node).parent = this;
    }

    static void preorder_visit(Node *root)
    {
        if (root != NULL)
        {
            cout << (*root).data;
            preorder_visit(root->left_child);
            preorder_visit(root->right_child);
        }
    }
    static void inorder_visit(Node *root)
    {
        if (root != NULL)
        {
            inorder_visit(root->left_child);
            cout << (*root).data;
            inorder_visit(root->right_child);
        }
    }
    static void postorder_visit(Node *root)
    {
        if (root != NULL)
        {
            postorder_visit(root->left_child);
            postorder_visit(root->right_child);
            cout << (*root).data;
        }
    }
};

int main()
{
    Node *node_a = new Node("A");
    Node *node_b = new Node("B");
    Node *node_c = new Node("C");
    Node *node_d = new Node("D");
    Node *node_f = new Node("F");
    Node *node_e = new Node("E");
    Node *node_g = new Node("G");
    Node *node_h = new Node("H");
    Node *node_i = new Node("I");
    node_f->add_left_child(node_d);
    node_f->add_right_child(node_h);
    node_d->add_left_child(node_b);
    node_d->add_right_child(node_e);
    node_b->add_left_child(node_a);
    node_b->add_right_child(node_c);
    node_h->add_left_child(node_g);
    node_h->add_right_child(node_i);
    Node::preorder_visit(node_f);
    cout << endl;
    Node::inorder_visit(node_f);
    cout << endl;
    Node::postorder_visit(node_f);
    return 0;
}