#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
int main(void)
{
    struct Node *top = NULL;

    struct Node *t1 = (struct Node*)malloc(sizeof(struct Node));
    t1->data = 10;
    t1->next= top;
    top = t1;

    struct Node *t2 = (struct Node *)malloc(sizeof(struct Node));
    t2->data = 45;
    t2->next= top;
    top = t2;

    printf("Top value: %d\n", top->data);
    printf("Next value: %d\n", top->next->data);

    struct Node *temp = top;
    int value = top->data;
    top = top->next;
    free(temp);

    printf("Popped value:%d\n", value);
    printf("New top: %d\n", top->data);
    free(top);
    return 0;
}