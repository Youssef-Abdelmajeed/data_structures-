#ifndef QUEUE_H_
#define QUEUE_H_

#include <stdio.h>
#include <limits.h> 
#include <stdlib.h>
#include <stdbool.h> 

#define EMPTY_QUEUE INT_MIN

/* linked list node structure */
typedef struct node 
{
    int value ; 
    struct node * next ; 
} node_t; 

/* queue object */
typedef struct queue 
{
    node_t * head ; 
    node_t * tail ; 
} queue_t; 

/**
 * @brief initilaize a queue object 
 * 
 * @param q queue object 
 */
void initQueue(queue_t * q) ; 

/**
 * @brief performs enqueue operation 
 * 
 * @param q queue object 
 * @param value 
 * @return true if the enqueue was successful
 * @return false if there is no memory left to allocate 
 */
bool enqueue(queue_t * q , int value)  ;

/**
 * @brief performs dequeue operation
 * 
 * @param q queue object 
 * @return int return the first member at the queue and INT_MIN if the list was empty  
 */
int dequeue (queue_t * q) ;

/**
 * @brief function to print the whole queue 
 * 
 * @param q queue object
 */
void printQueue(queue_t *q) ; 

#endif /* QUEUE_H_ */