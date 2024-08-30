#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    uint64_t* ptr = malloc(sizeof(uint64_t));
    scanf("%lu", ptr);
    printf("%lu\n", *ptr);
    free(ptr);
}