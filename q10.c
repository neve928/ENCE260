#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "linkedlist.h"

void deleteElement(LinkedList_t* list, LinkedListElement_t* element)
{
    if (element == NULL || list->head == NULL) {
        return;
    }
    if (element == list->head) {
        list->head = element->next;
        if (list->head == NULL) {
            list->tail = NULL;
        }
        free(element);
        return;
    }
    LinkedListElement_t* previous = list->head;
    LinkedListElement_t* current = list->head->next;

    while (current != NULL) {
        if (current == element) {
            if (current == list -> tail) {
                list->tail = previous;
            }
            previous->next = current -> next;
            free(current);
            return;
        }
        previous = current;
        current = current -> next;
    }
    free(element);
}
