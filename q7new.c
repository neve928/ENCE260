#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    size_t capacity = 10;
    int16_t* dynArray = calloc(capacity, sizeof(int16_t));
    if (dynArray == NULL) {
        fprintf(stderr, "Initial allocation failed\n");
        return 1;
    }

    int16_t num;
    size_t i = 0;
    while (scanf("%hd", &num) == 1 && num != -10000) {
        if (i == capacity) {
            size_t new_capacity = capacity + 10;
            int16_t *newArray = realloc(dynArray, new_capacity * sizeof(int16_t));
            if (newArray == NULL) {
                // If realloc fails, free the old array and exit
                free(dynArray);
                fprintf(stderr, "Reallocation failed\n");
                return 1;
            }
            dynArray = newArray;
            capacity = new_capacity; // Update capacity after successful realloc
        }
        dynArray[i] = num;
        i++;
    }

    printf("Numbers read = %zu\n", i);
    free(dynArray);
    return 0;
}