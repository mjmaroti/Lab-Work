/*
* Implementation of indexOfLinkedList
*
* @author ISaiah Hilkemanm
* @email ihilkema@mtu.edu
*
* @date 11/15/2024
*/
#include "linkedlist.h"

/*
* Gets the index of a value.
*
* @param head: The first node of the list.
* @param value: The value to search for.
*
* @return: The index of the value, or -1 if the value is not found.
*/
//start function
int indexOfLinkedList(Node *head, int value)
{
//initialize index counter
    int index = 0;

//navigate the linked list
    Node *current = head;
    while (current != NULL)
    {
        //check each list value against the imput value
        if (current->value == value)
        {
          //if it matches, return the index
            return index;
        }


        current = current->next;

        // Increment the index.
        index++;
    }

    //If it fails return -1
    return -1;
}
