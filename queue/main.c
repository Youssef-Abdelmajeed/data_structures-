#include "queue.h"

int main(int argc,char *argv[])
{
    queue_t q1 ; 
    initQueue(&q1) ; 
    enqueue(&q1,5) ; 
    enqueue(&q1,4) ; 
    enqueue(&q1,3) ; 
    enqueue(&q1,2) ; 
    enqueue(&q1,1) ; 
    printQueue(&q1) ;
    return 0 ; 
}