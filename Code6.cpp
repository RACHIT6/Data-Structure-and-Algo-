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
    class node *ptr = head;

    do
    {
        cout << "Data: " << ptr->data << endl;
        ptr = ptr->next;
    } while (ptr != head);
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
    p4->next = p1;

    linker(p1);

    return 0;
}