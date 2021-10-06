#include <iostream>
using namespace std;

class node
{
public:
    int data;
    class node *next;
};

void linker(class node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element: " << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main(int argc, char const *argv[])
{
    class node *p1;
    class node *p2;
    class node *p3;
    class node *p4;
    class node *p5;

    p1 = (class node *)malloc(sizeof(class node));
    p2 = (class node *)malloc(sizeof(class node));
    p3 = (class node *)malloc(sizeof(class node));
    p4 = (class node *)malloc(sizeof(class node));
    p5 = (class node *)malloc(sizeof(class node));

    p1->data = 1;
    p1->next = p2;

    p2->data = 10;
    p2->next = p3;

    p3->data = 15;
    p3->next = p4;

    p4->data = 26;
    p4->next = p5;

    cout<<"Memory"<<endl;

    p5->data = 31;
    p5->next = NULL;

    linker(p1);

    return 0;
}