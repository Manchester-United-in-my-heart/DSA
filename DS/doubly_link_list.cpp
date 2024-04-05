#include <bits/stdc++.h>
using namespace std;

class BiDirectNode
{
public:
    int data;
    BiDirectNode *prev;
    BiDirectNode *next;
    BiDirectNode()
    {
        data = 0;
        prev = NULL;
        next = NULL;
    }
    BiDirectNode(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }

    BiDirectNode(int val, BiDirectNode *prev_node, BiDirectNode *next_node)
    {
        data = val;
        prev = prev_node;
        next = next_node;
    }
};
class DoublyLinkList
{
public:
    BiDirectNode *head;
    BiDirectNode *tail;
    DoublyLinkList(int data)
    {
        head = new BiDirectNode(data);
        tail = head;
    }
    void insertBefore(BiDirectNode *node, int data);
    void insertAfter(BiDirectNode *node, int data);
    void deleteBefore(BiDirectNode *node);
    void deleteAfter(BiDirectNode *node);
};

void DoublyLinkList::insertAfter(BiDirectNode *node, int val)
{
    if ((*node).next == NULL)
    {
        (*node).next = new BiDirectNode(val, node, NULL);
        tail = (*node).next;
        return;
    }

    BiDirectNode *next_node = (*node).next;
    BiDirectNode *temp_node = new BiDirectNode(val, node, next_node);
    (*node).next = temp_node;
    (*next_node).prev = temp_node;
};

void DoublyLinkList::insertBefore(BiDirectNode *node, int val)
{
    if ((*node).prev == NULL)
    {
        BiDirectNode *new_node = new BiDirectNode(val, NULL, node);
        head->prev = new_node;
        head = new_node;
        return;
    }
    BiDirectNode *prev_node = (*node).prev;
    BiDirectNode *temp_node = new BiDirectNode(val, prev_node, node);
    (*node).prev = temp_node;
    (*prev_node).next = temp_node;
};

void DoublyLinkList::deleteBefore(BiDirectNode *node)
{
    BiDirectNode *prev_node = (*node).prev;
    if (prev_node == NULL)
        return;
    BiDirectNode *prev_prev_node = (*prev_node).prev;
    (*node).prev = prev_prev_node;
    if (prev_prev_node != NULL)
        (*prev_prev_node).next = node;
}

void DoublyLinkList::deleteAfter(BiDirectNode *node)
{
    BiDirectNode *next_node = (*node).next;
    if (next_node == NULL)
    {
        return;
    }

    BiDirectNode *next_next_node = (*next_node).next;
    (*node).next = next_next_node;
    if (next_next_node != NULL)
        (*next_next_node).prev = node;
}

int main()
{
    DoublyLinkList db_list = DoublyLinkList(10);
    db_list.insertAfter(db_list.head, 20);
    db_list.insertAfter(db_list.head, 15);
    db_list.insertBefore(db_list.head, 5);
    db_list.insertBefore(db_list.tail, 18);
    db_list.deleteBefore(db_list.tail);
    return 0;
}