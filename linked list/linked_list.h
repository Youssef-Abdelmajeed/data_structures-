#ifndef LINKED_LIST_H_ 
#define LINKED_LIST_H_

#include <stdio.h> 
#include <stdlib.h> 
#include <stdbool.h> 

/* node structutre */
typedef struct node 
{
    int value ; 
    struct node * next ; 
}node_t ;

typedef node_t * HEAD ;

/**
 * @brief print all nodes 
 * 
 * @param head linked list head object 
 * @return int no of node in the list 
 */
int printList(HEAD *head) ;

/**
 * @brief Create a New Node object
 * 
 * @param head linked list head object 
 * @param value value to assign to the new node 
 * @return node_t* pointer to the new created node 
 */
node_t *CreateNewNode(HEAD *head,int value) ;

/**
 * @brief append node at head 
 * 
 * @param head linked list head object 
 * @param value value to assign to the new node
 * 
 */
bool insertAtHead(HEAD *head, int value) ;
/**
 * @brief delete the node at head 
 * 
 * @param head linked list head object
 * 
 */
bool deleteAthead(HEAD *head) ;

#endif /* LINKED_LIST_H_ */