#include <stdio.h>
#include <stdbool.h> 
#include<limits.h> 

#define STACK_SIZE 5 
int stack_members[STACK_SIZE] ;  
int top = -1 ; 

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

    for(int i=0 ; i<STACK_SIZE ;i++)
    {
        printf("%d " , pop()) ; 
    }
    printf("\n") ;
    return 0 ; 
}
bool push (int value)
{
    if(top>=STACK_SIZE-1) return false ; /* Stack is full */
    top ++ ; /* increment the top by one */
    stack_members[top] = value ;
    return true ;
}
int pop ()
{
    if(top==-1) return INT_MIN ;
    int temp = stack_members[top] ; 
    top--; 
    return temp ;
}