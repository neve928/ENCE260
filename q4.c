#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

void fillRamp(int16_t* data, size_t n)
{
    int i;
    int16_t num = 1;
    for (i=0; i<n; i++) {
        data[i] = num;
        num++;
    }
}

int main(void)
{
    int16_t* data = calloc(4, sizeof(int16_t));
    fillRamp(data, 4);
    for (size_t i = 0; i < 4; i++) {
        printf("data[%zu] = %d\n", i, data[i]);
    }
    free(data);
}