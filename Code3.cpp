#include <iostream>
using namespace std;

class node
{
public:
    int data;
    class node *next;
};

void linker(class node *head)
{

    while (head != NULL)
    {
        cout << "Element: " << head->data << endl;
        head = head->next;
    }
}

class node *InsertAtFirst(class node *head, int data)
{
    class node *ptr = (class node *)malloc(sizeof(class node));

    ptr->data = data;
    ptr->next = head;

    return ptr;
}

class node *InsertAtIndex(class node *head, int data, int index)
{
    class node *ptr = (class node *)malloc(sizeof(class node));
    class node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;

    return head;
}

class node *InsertAtLast(class node *head, int data)
{
    class node *ptr = (class node *)malloc(sizeof(class node));
    class node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;

    return head;
}

class node *InsertAtNode(class node *head, class node *p, int data)
{
    class node *ptr = (class node *)malloc(sizeof(class node));

    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;

    return head;
}

int main(int argc, char const *argv[])
{
    class node *p1 = (class node *)malloc(sizeof(class node));
    class node *p2 = (class node *)malloc(sizeof(class node));
    class node *p3 = (class node *)malloc(sizeof(class node));
    class node *p4 = (class node *)malloc(sizeof(class node));

    p1->data = 2;
    p1->next = p2;

    p2->data = 4;
    p2->next = p3;

    p3->data = 6;
    p3->next = p4;

    p4->data = 8;
    p4->next = NULL;

    // p1 = InsertAtFirst(p1, 50);
    // p1 = InsertAtIndex(p1, 50, 3);
    // p1 = InsertAtLast(p1, 50);
    p1 = InsertAtNode(p1, p2, 50);

    linker(p1);

    return 0;
}