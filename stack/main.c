#include <stdio.h>
#include "stack.h"

int main (int argc , char*argv[]) 
{
    stack_t s1 = NULL;

    push(&s1,5) ;
    push(&s1,4) ; 
    push(&s1,3) ; 
    push(&s1,2) ; 
    push(&s1,1) ; 
    push(&s1,0) ; 

    for(int i=0 ; i<6 ;i++)
    {
        printf("%d " , pop(&s1)) ; 
    }
    printf("\n") ;

    deleteStack(&s1); /* removes all element in s1 */
    
    return 0 ; 
}