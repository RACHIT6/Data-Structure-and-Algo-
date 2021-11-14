#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};

int IsEmpty(struct stack *sp)
{
    if (sp->top == -1)
    {
        return 1;
    }

    return 0;
}

int IsFull(struct stack *sp)
{
    if (sp->top == sp->top - 1)
    {
        return 1;
    }

    return 0;
}

void push(struct stack *sp, char value)
{
    if (IsFull(sp))
    {
        printf("Stack Overflow\n");
    }

    else
    {
        sp->top++;
        sp->arr[sp->top] = value;
    }
}

int pop(struct stack *sp)
{
    if (IsEmpty(sp))
    {
        printf("Stack UnderFlow\n");
    }

    else
    {
        int var = sp->arr[sp->top];
        sp->top--;
        return var;
    }
}

int match(char a, char b){
    if (a == '{' && b == '}')
    {
        return 1;
    }
    
    if (a == '(' && b == ')')
    {
        return 1;
    }
    
    if (a == '[' && b == ']')
    {
        return 1;
    }
    
    return 0;
}

int Parenthesis(char *exp)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = strlen(exp);
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char popped_ch;

    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{')
        {
            push(sp, exp[i]);
        }

        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (IsEmpty(sp))
            {
                return 0;
            }

            popped_ch = pop(sp);
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
            
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
    char *exp = "{}{}{}{}";

    if (Parenthesis(exp))
    {
        printf("Parenthesis Match Found\n");
    }

    else
    {
        printf("Parenthesis Match not Found\n");
    }

    return 0;
}