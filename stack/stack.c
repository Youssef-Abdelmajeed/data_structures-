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

node_t *head  = NULL ; 

bool push (int value);
int pop () ; 

int main (int argc , char*argv[]) 
{

    push(5) ;
    push(4) ; 
    push(3) ; 
    push(2) ; 
    push(1) ; 
    push(0) ; // wont happen stack over flow

    for(int i=0 ; i<6 ;i++)
    {
        printf("%d " , pop()) ; 
    }
    printf("\n") ;
    
    return 0 ; 
}
bool push (int value)
{
    node_t * temp = malloc(sizeof(node_t)) ; // allocate memory for the new member  
    if(temp==NULL) return false ; /* Stack is full */
    temp->value = value ;
    temp->next = head ; 
    head = temp ;    
    return true ;
}
int pop ()
{
    if(head==NULL) return INT_MIN ;
    node_t* temp = head ;  
    int result =temp->value ; 
    head = head->next ;
    free(temp) ;

    return result;
}