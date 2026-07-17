#include <stdio.h>


#define MAX 3


struct Stack{
    int items[MAX];
    int top;
};


void push(struct Stack *s, int value){
    s->top++;
    s->items[s->top] = value;

}



int main(void)
{
    struct Stack my_stack;
    my_stack.top = -1;

    push(&my_stack, 10);
    push(&my_stack, 20);
    push(&my_stack, 30);


    printf("Top: %d", my_stack.items[my_stack.top]);
    return 0;
}