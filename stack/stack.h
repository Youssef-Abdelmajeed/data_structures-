#ifndef STACK_H_ 
#define STACK_H_ 

#include <stdbool.h> 
#include <limits.h> 
#include <stdlib.h>
#include <stdio.h>


typedef struct node {
    int value ; 
    struct node * next ; 
    
} node_t; 

/* stack object */
typedef node_t * stack_t ; 

/**
 * @brief initialization of stack object
 * 
 * @param stack address of stack object
 */
void initStack(stack_t * stack) ;

/**
 * @brief print all element in the stack 
 * 
 * @param stack address of stack object
 */
void printStack(stack_t * stack) ;

/**
 * @brief push values into stack
 * 
 * @param stack address of stack object 
 * @param value the value to be added on top of the stack
 * @return true  if the the value is pushed into the stack
 * @return false if there a stack overflow 
 */
bool push (stack_t * stack ,int value);
/**
 * @brief pop values out of the stack 
 * 
 * @param stack  address of stack object 
 * @return int the value at top if the pop was successful and INT_MIN otherwise
 */
int pop (stack_t *stack) ; 

/**
 * @brief delete a stack object members 
 * 
 * @param stack address of stack object 
 * @return true  if the whole stack got removed 
 * @return false otherwise 
 */
bool deleteStack(stack_t * stack) ; 


#endif /* STACK_H_ */