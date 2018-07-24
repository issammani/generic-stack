#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

// example of custom struct
typedef struct {
    int day,month,year;
}Date;

// function to print a date
void print_date(void* data);

int main(int argc, char **argv){
    stack s;
    Date d[] = {{31,12,2018},{12,12,2012},{11,11,2011}};

    // create a new stack and supply size of data
    new_stack(&s,sizeof(Date));

    // push element into stack
    push(&s,&d[0]);

    // get size of stack
    printf("%d\n",size(&s)); // 1

    // pop last added element
    pop(&s);
    printf("%d\n",size(&s)); // 0

    // push more elements
    push(&s,&d[0]);
    push(&s,&d[1]);
    push(&s,&d[2]);

    // print stack
    print_stack(s,print_date);
    
    // free the stack
    free_stack(&s);

    return 0;
}

void print_date(void* data){
    Date d = *(Date*)data;
    printf("%d/%d/%d \n",d.day,d.month,d.year);
}