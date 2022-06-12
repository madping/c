#include <stdio.h>

#define QUEUE_SIZE 5

typedef int element;

typedef struct Queuetype{
    
    element data[QUEUE_SIZE];
    int front, rear;

}Queuetype;


void init_queue(Queuetype* q){

    q->fornt = q->rear = 0;

}


void is_empty(Queuetype* q){

    return (q->fornt == q->rear);

}


void is_full(Queuetype* q){

    return (q->fornt == ((q->rear+1)%QUEUE_SIZE);

}



int main()
{
    // enqueue
    // rere++;
    // rear = rear % QUEUE_SIZE


    // dequeue
    // front++;
    // front = front & QUEUE_SIZE


    // IsQueueEmpty
    // if(front == rear)
    //  is Empty


    // IsQueueFull
    // IF(front == (rear+1) % QUEUE_SIZE)
    // is Full






}