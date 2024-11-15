 /* Implementation of getlinkedlist
 ** @date 11/15/2024
 **/

#include "linkedlist.h"

 /*
  ** Gets a value from a linked list.
  **
  ** @param head: The first node of the list.
  ** @param index: The index to get the value of.
  ** @param out: location to store the value from the list.
  **
  ** @return: 0 on success, -1 on failure (out of bounds).
  **/
 int getLinkedList(Node *head, int index, int *out)
{
        // Validate input parameters
        if (head == NULL || index < 0 || out == NULL) {
                return -1;
        }

        Node *current = head;
        int currentIndex = 0;

        // Traverse the linked list
        while (current != NULL) {
                if (currentIndex == index) {
                        *out = current->data; // Store the value
                        return 0; // Success
                }
                current = current->next; // Move to the next node
                currentIndex++;
        }
        // If index is out of bounds
        return -1;
}
