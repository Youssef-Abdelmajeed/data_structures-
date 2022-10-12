#include "linked_list.h"



int printList(HEAD *head) 
{
    node_t * tmp = *head ; 
    int counter = 0 ; 
    while (tmp!=NULL)
    {
        printf("%d-> ",tmp->value) ;
        tmp = tmp->next ;
        counter++ ;
    }
    printf("NULL\n");
    return counter ;
}

node_t *CreateNewNode(HEAD *head,int value)
{
    /* allocate space for the new node */
    node_t *newNode = (node_t *) malloc(sizeof(node_t)) ; 

    /* in case if malloc succeed to allocate */
    if (newNode!=NULL)
    {
        newNode -> value = value ; 
        newNode -> next = NULL;
    }

    return newNode ;
    
}
bool insertAtHead(HEAD *head, int value) 
{
    /* create new node with the given value */
    node_t *tmp = CreateNewNode(head , value) ;
    
    /* if malloc fails to allocate */
    if (tmp==NULL) return false ;
    
    /* the next node is the previous node */
    tmp ->next = *head  ;
    
    /* the new head is the new node */
    *head = tmp ;

    return true;

}

bool deleteAthead(HEAD *head)
{
    /* copy head data */
    node_t * tmp = *head ;
    
    /* in case if the list was empty */
    if(tmp==NULL) return false ;
    
    /* set the new head to be the next node */
    *head = tmp->next ; 
   
    /* deallocate node at head */
    free(tmp);

    return true ;
}