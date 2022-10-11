#include "stack.h"

bool push (stack_t * stack ,int value)
{
    node_t * temp = malloc(sizeof(node_t)) ; /* allocate memory for the new member */ 
    if(temp==NULL) return false ; /* Stack is full */
    temp->value = value ;
    temp->next = *stack ; 
    *stack = temp ;    
    return true ;
}

int pop (stack_t * stack )
{
    if(*stack==NULL) return INT_MIN ; /* end of stack  */
    node_t* temp = *stack ;  
    int result =temp->value ; 
    *stack = (*stack)->next ;
    free(temp) ;

    return result;
}

bool deleteStack(stack_t * stack)
{
    bool result  =false ; 
    node_t *temp = *stack  ;
    while (temp != NULL)
    {
        free(temp++) ; 
    }
    result = true ; 
    *stack = NULL ;
    return result ;
}