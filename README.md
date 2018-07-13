# Generic Stack

An implementation of a generic stack in c

## Getting Started

Follow these instructions to compile and run

### Prerequisites

* gcc (or any c compiler, you can change the compiler in the Makefile)
* make


### Compiling


```
$ make
$ ./main
```


## Usage

Assume we have the following struct:

```C
typedef struct {
    int day,month,year;
}Date;
```
Creating a stack should look something like this :

```C
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
```

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details

