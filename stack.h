#ifndef _STACK
#define _STACK

typedef struct stack_node {
    void* data;
    int data_size;
    struct stack_node* next;
}stack_node;

typedef stack_node* stack;

// function prototypes
stack new_stack();
int push(stack s, void* element);
void* pop(stack s);


#endif