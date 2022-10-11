#include <stdio.h>
#include <stdbool.h> 
#include <limits.h> 
#include <stdlib.h>
#define STACK_SIZE 5 
int stack_members[STACK_SIZE] ;  

typedef struct node {
    int value ; 
    struct node * next ; 
    
} node_t; 

typedef node_t * stack_t ; 

bool push (stack_t * stack ,int value);
int pop (stack_t *stack) ; 

int main (int argc , char*argv[]) 
{
    stack_t s1 = NULL;

    push(&s1,5) ;
    push(&s1,4) ; 
    push(&s1,3) ; 
    push(&s1,2) ; 
    push(&s1,1) ; 
    push(&s1,0) ; // wont happen stack over flow

    for(int i=0 ; i<6 ;i++)
    {
        printf("%d " , pop(&s1)) ; 
    }
    printf("\n") ;
    
    return 0 ; 
}
bool push (stack_t * stack ,int value)
{
    node_t * temp = malloc(sizeof(node_t)) ; // allocate memory for the new member  
    if(temp==NULL) return false ; /* Stack is full */
    temp->value = value ;
    temp->next = *stack ; 
    *stack = temp ;    
    return true ;
}
int pop (stack_t * stack )
{
    if(*stack==NULL) return INT_MIN ;
    node_t* temp = *stack ;  
    int result =temp->value ; 
    *stack = (*stack)->next ;
    free(temp) ;

    return result;
}