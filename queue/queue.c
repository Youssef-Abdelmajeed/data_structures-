#include "queue.h"


void initQueue(queue_t * q)
{
    q->head = NULL ; 
    q->tail = NULL ;
}

bool enqueue(queue_t * q , int value) 
{
    /* allocate space for the new member in the queue */
    node_t * new_member = (node_t *)malloc(sizeof(node_t)) ;  

    /* in case if malloc can't allocate more */
    if ( new_member == NULL) return false ;

    /* fill the new member */
    new_member ->value = value ; 
    new_member->next = NULL ;

    /* if the queue has a tail */
    if(q->tail != NULL)
    {
        /* set the previous tail next to the new member */
        q->tail->next = new_member ;
    }

    /*set the new tail */
    q->tail = new_member ; 

    /*if the list was empty */
    if(q->head ==NULL) 
    {
        q->head = new_member ;
    }

    return true ;
}

int dequeue (queue_t * q) 
{
    /* in case of empty queue */
    if(q->head == NULL) return EMPTY_QUEUE ;
   
    /* get a copy of the member at head */
    node_t *tmp = q->head ; 
    
    /* get it value */
    int result = tmp->value ; 
    
    /* set the new head to be the next node */
    q->head = q->head->next ;

    /* if there is no next member that means that the list is empty */
    if(q->head==NULL)
    {
        /* make sure the tail make sense */
        q->tail = NULL ;
    }

    /* deallocate the first member */
    free(tmp) ;
    
    return result ;
}

void printQueue(queue_t *q)
{
    /* get copy of the head */
    node_t * tmp = q->head;

    while (tmp!= NULL)
    {
        printf("%d ",tmp->value) ;
        tmp = tmp->next ;
    }
    printf("\n");
}