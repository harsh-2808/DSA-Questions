#include <stdio.h>
#include <stdlib.h>

typedef struct queue
{
    int size;
    int rear;
    int front;
    int *arr;
} queue;

int main()
{
    queue *q = (queue *)malloc(sizeof(queue));
    q->size = 6;
    q->
}