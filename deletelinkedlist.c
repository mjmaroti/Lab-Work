#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * Deletes the node at index from the linked list.
 *
 * @param head: memory address of pointer to first node in the list.
 *              This will be updated to point at the new head if it changes
 *              such as when deleting index 0.
 * @param index: The index to remove from the list.
 *
 * @return 0 on success, -1 on failure.
 */
//start function
int deleteLinkedList(Node **head, int index)
{

//if list is empty return fail
        if(*head == NULL){
                return -1;
        }

        Node *temp = *head;
//if the value to be deleted is the first value 
        if (index == 0){
                temp = temp->next;
                free(temp);
                return 0;
        }
//check if the temp vlaue is not NULL and counter is less than the index
        for (int i = 0; temp != NULL && i < index-1; i++){
//move values to redefine for deleteing
                temp = temp->next;
        }
//if its the temp value is NULL return fail
        if( temp == NULL || temp->next == NULL){

                return -1;
        }

        //replaceing the value
        Node *tempd = temp->next;
        temp->next=temp->next->next;
        //prevent mem leaks
        free(tempd);

    return 0;
