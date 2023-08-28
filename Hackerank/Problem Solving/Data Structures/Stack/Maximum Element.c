#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int *arr;
    int size;
    int top;
};
void push(struct stack *s, int data)
{
    if(s->top != s->size -1)
    {
        s->top++;
        s->arr[s->top] = data;
    }
    else {
        printf("Stack overflow\n");
    }
}

int pop(struct stack *s)
{
    int ans = -1;
    if(s->top==-1)
        printf("Stack underflow\n");
    else {
        ans = s->arr[s->top];
        s->top--;
    }
    return ans;
}

int maximum(struct stack *s)
{
	int i, max;
    max = s->arr[0];
    for(i = 0; i <= s->top; i++)
    {
        if(max < s->arr[i])
            max = s->arr[i];
    }
    return max;
}

int main()
{
    int query,i;
    scanf("%d",&query);
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = query + 1;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    for(i = 0; i < query; i++)
    {
        int type;
        scanf("%d",&type);
        if(type == 1)
        {
            int data;
            scanf("%d",&data);
            push(s,data);
        }
        else if(type == 2)
        {
            pop(s);
        }
        else
        {
            int max = maximum(s);
            printf("%d\n",max);
        }
    }
}

