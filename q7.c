#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    size_t capacity = 10;
    int16_t* dynArray = calloc(capacity, sizeof(int16_t));
    int16_t num;
    size_t i = 0;
    scanf("%hd", &num);
    while (num != -10000) {
        if (i==capacity) {
            capacity += 10;
            dynArray = realloc(dynArray, capacity*sizeof(int16_t));
        }
        dynArray[i] = num;
        i++;
        scanf("%hd", &num);
    }
    printf("Numbers read = %zu\n", i);
    free(dynArray);
}