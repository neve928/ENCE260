#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "q8.h"

void addElement(LinkedList_t* list, char data)
{
    LinkedListElement_t* element = (LinkedListElement_t*)calloc(1, sizeof(LinkedListElement_t));
    if (element == NULL) {
        return;
    }
    element->data = data;
    element->next = NULL;

    if (list->head == NULL) {
        list->head = element;
        list->tail = element;
    } else {
        list->tail->next = element;
        list->tail = element;
    }
}

int main(void)
{
    LinkedList_t alist = {.head = NULL, .tail = NULL};
    addElement(&alist, 'a');
    printf("The head element data is: %c\nThe tail element data is: %c\n", alist.head->data, alist.tail->data);
}