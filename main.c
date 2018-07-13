#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// example of custom struct
typedef struct {
    int day,month,year;
}Date;


int main(int argc, char **argv){
    stack s;
    Date d = {31,12,2018};

    // create a new stack and supply size of data
    new_stack(&s,sizeof(Date));

    // push element into stack
    push(&s,&d);

    // get size of stack
    printf("%d\n",size(&s)); // 1

    // pop last added element
    pop(&s);
    printf("%d\n",size(&s)); // 0

    // free the stack
    free_stack(&s);

    return 0;
}