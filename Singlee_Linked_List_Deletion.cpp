#include <bits/stdc++.h>
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
        cout << "Data: " << head->data << endl;
        head = head->next;
    }
}

class node *DeleteAtFirst(class node *head)
{
    class node *ptr = head;
    head = head->next;
    free(ptr);

    return head;
}

class node *deleteAtIndex(class node *head, int index)
{
    class node *ptr = head;
    class node *p = head->next;
    int i = 0;

    while (i != index - 1)
    {
        ptr = ptr->next;
        p = p->next;
        i++;
    }

    ptr->next = p->next;
    free(p);

    return head;
}

class node *deleteAtLast(class node *head)
{
    class node *ptr = head;
    class node *p = head->next;

    while (p->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }

    free(p);
    ptr->next = NULL;

    return head;
}

class node *DeleteAtValue(class node *head, int value)
{
    class node *p = head;
    class node *q = head->next;

    if (p->data == value)
    {
        free(p);
        return q;
    }

    if (p->data != value)
    {
        while (q->data != value && q->next == NULL)
        {
            p = p->next;
            q = q->next;
        }

        if (q->data == value)
        {
            p->next = q->next;
            free(q);
            return head;
        }

        else
        {
            cout << "Enter value is not available in linked list";
            return NULL;
        }
    }
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

    p4->data = 1;
    p4->next = NULL;

    // p1 = DeleteAtFirst(p1);
    // p1 = deleteAtIndex(p1, 2);
    // p1 = deleteAtLast(p1);
    p1 = DeleteAtValue(p1, 3);

    if (p1 != NULL)
    {
        linker(p1);
    }

    return 0;
}
