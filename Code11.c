#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int size;
    int top;
    char *arr;
};

int IsFull(struct node *p)
{
    if (p->top == p->size - 1)
    {
        return 1;
    }
    return 0;
}

int IsEmpty(struct node *p)
{
    if (p->top == -1)
    {
        return 1;
    }
    return 0;
}

void push(struct node *p, int element)
{
    if (IsFull(p))
    {
        printf("Stack Overflow\n");
    }

    else
    {
        p->top++;
        p->arr[p->top] = element;
    }
}

int pop(struct node *ptr)
{
    if (IsEmpty(ptr))
    {
        printf("Stack Underflow\n");
    }

    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int ParenthesisMatch(char *exp)
{
    struct node *sp = (struct node *)malloc(sizeof(struct node));
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(sp, '(');
        }

        else if (exp[i] == ')')
        {
            if (IsEmpty(sp))
            {
                return 0;
            }
            pop(sp);
        }
    }

    if (IsEmpty(sp))
    {
        return 1;
    }

    return 0;
}

int main(int argc, char const *argv[])
{
    char *exp = "(2*54) - (2*0)";

    if (ParenthesisMatch(exp))
    {
        printf("Parenthesis matched\n");
    }

    else
    {
        printf("Parenthesis not matched\n");
    }

    return 0;
}