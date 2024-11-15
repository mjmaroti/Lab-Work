/*
 * Implementation of deleteLinkedList
 *
 * @author Ryan McCabe
 * @email rsmccabe@mtu.edu
 *
 * @date 11/15/2024
 */
#include "linkedlist.h"
#include <stdlib.h>

/*
 * Deletes the node at index from the linked list.
 *
 * @param head: memory address of pointer to first node in the list.
 * This will be updated to point at the new head if it changes
 * such as when deleting index 0.
 * @param index: The index to remove from the list.
 *
 * @return 0 on success, -1 on failure.
 */
int deleteLinkedList(Node **head, int index) {
    if (head == NULL || *head == NULL || index < 0) {
        // Invalid input or empty list
        return -1;
    }

    Node *current = *head;

    // Case when deleting the first node
    if (index == 0) {
        *head = current->next; // Update head to the next node
        free(current);          // Free the old head node
        return 0;
    }

    // Traverse the list to find the node just before the one we want to delete
    Node *prev = NULL;
    for (int i = 0; current != NULL && i < index; ++i) {
        prev = current;
        current = current->next;
    }

    // If current is NULL, the index is out of bounds
    if (current == NULL) {
        return -1;
    }

    // Unlink the node to be deleted
    prev->next = current->next;
    
    // Free the memory of the node
    free(current);

    return 0;
}
