#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *linker(struct node *head)
{

    struct node *p = head;
    do
    {
        printf("Element: %d\n", p->data);
        p = p->next;
    } while (p->next != head);

    do
    {
        printf("Element: %d\n", p->data);
        p = p->prev;
    }while (p != NULL);

    return head;
}

struct node *InsertAtFirst(struct node *head, int data)
{
    struct node *p = head;
    struct node *q = head->next;
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    while (q != head)
    {
        p = p->next;
        q = q->next;
    }

    ptr->next = p->next;
    ptr->data = data;
    p->next = ptr;

    return head;
}

int main(int argc, char const *argv[])
{
    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    struct node *p2 = (struct node *)malloc(sizeof(struct node));
    struct node *p3 = (struct node *)malloc(sizeof(struct node));
    struct node *p4 = (struct node *)malloc(sizeof(struct node));

    p1->prev = NULL;
    p1->data = 1;
    p1->next = p2;

    p2->prev = p1;
    p2->data = 2;
    p2->next = p3;

    p3->prev = p2;
    p3->data = 3;
    p3->next = p4;

    p4->prev = p3;
    p4->data = 4;
    p4->next = p1;

    // p1 = InsertAtFirst(p1, 56);

    p1 = linker(p1);

    return 0;
}