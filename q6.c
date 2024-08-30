#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <string.h>

Person_t* newPerson(const char* name, uint8_t age, double height) 
{
    Person_t* personPtr = calloc(1, sizeof(Person_t));
    size_t size = strlen(name) + 1;
    personPtr->name = calloc(1, size);
    strncpy(personPtr->name, name, size);
    personPtr->age = age;
    personPtr->height = height;
    return personPtr;
}

void freePerson(Person_t* person)
{
    free(person->name);
    free(person); 
}
