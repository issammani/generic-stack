#ifndef _STACK
#define _STACK

typedef enum {false, true} bool;

typedef struct stack_node {
    void* data;
    struct stack_node* next;
}stack_node;

typedef struct stack {
    int size;
    int data_size;
    stack_node *head;
}stack;

// main functions
void new_stack(stack* s, int data_size);
void push(stack* s, void* element);
void* pop(stack* s);
void free_stack(stack* s);

// helper functions
int size(stack* s);

#endif