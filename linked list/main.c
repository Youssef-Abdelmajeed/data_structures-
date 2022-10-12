#include "linked_list.h"

int main (int argc ,char * argv[])
{
    HEAD L1 =NULL;
    
    insertAtHead(&L1,10) ;
    insertAtHead(&L1,20) ;
    insertAtHead(&L1,30) ;

    printList(&L1);
    deleteAthead(&L1) ;
    insertAtHead(&L1,34) ;
    printList(&L1);

    return 0 ;
}