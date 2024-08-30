#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int16_t* ramp(size_t n) 
{
    int16_t* ptr;
    ptr = calloc(n, sizeof(int16_t));
    int i = 0;
    int num = 1;
    for (i=0; i<n; i++) {
        (ptr)[i] = num;
        num++;
    }
    return ptr;
}

int main(void)
{
    int16_t* data = ramp(5);
    for (size_t i = 0; i < 5; i++) {
    printf("%d ", data[i]);
    }
    free(data);
}