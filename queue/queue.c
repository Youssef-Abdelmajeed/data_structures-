#include <stdbool.h> 
#include <limits.h> 
#include <stdlib.h>
#include <stdio.h>


typedef struct node {
    int value ; 
    struct node * next ; 
    
} node_t; 

/* queue object */
typedef struct  queue {
    node_t *head ;     
    node_t *tail ;

}queue_t ; 

/**
 * @brief initialization of queue object
 * 
 * @param q  queue object
 */
void initQueue(queue_t *q) ; 

/**
 * @brief enqueue a value 
 * 
 * @param q queue object 
 * @return true  if the enqueue happen successfuly  
 * @return false  if there is no more memory to allocate 
 */
bool enqueue (queue_t *q,int value) ;

/**
 * @brief dequeuea value
 * 
 * @param q queue object
 * @return int  INT_MIN  if the queue was empty and first member at the queue otherwise 
 */
int dequeue (queue_t *q) ; 


int main(int argc ,char *argv[])
{
    queue_t q1 ; 
    initQueue(&q1) ; 
    enqueue(&q1,5) ; 
    enqueue(&q1,4) ; 
    enqueue(&q1,3) ; 
    enqueue(&q1,2) ; 
    enqueue(&q1,1) ; 
    enqueue(&q1,0) ; 

    for(int i = 0 ; i<7 ; i++)
    {
        printf("%d ",dequeue(&q1)) ;
    }

    return 0 ;
}

void initQueue(queue_t *q) 
{
    q->head = NULL ; 
    q->tail = NULL ;
}

bool enqueue (queue_t *q,int value) 
{
    /* create a new member With the given value  */ 
    node_t * tmp = malloc(sizeof(node_t)) ; 
    if (tmp==NULL) return false  ; /* if the allocation can't happen */
    
    tmp ->value = value ; 
    tmp->next = NULL ; 

    /* if there is a tail */
    if(q->tail != NULL)
    {
        q->tail->next = tmp ; 
    }

    /* set the member to be the new tail */
    q->tail = tmp ;

    /* if the list was empty */
    if(q->head==NULL) 
    {
        /* set the head to be the new member */
        q->head = tmp ;
    }
    return true ;
}

int dequeue (queue_t *q)
{
    /* if the list was empty */
    if(q->head==NULL) return INT_MIN ;  
   
    /* get the first element at the queue */
    node_t *tmp = q->head ; 
    int result = tmp->value ; 

    /* set the new head to be the previous element  */
    q->head = q->head->next ;
 
   /* if the new head is null then the list is empty */
    if (q->head ==NULL)
    {
        q->tail = NULL ;
    }

    /* deallocate the member */
    free(tmp) ; 

    return result ;
}