
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

char* skipping(const char* string, size_t n)
{
    size_t i;
    int j=0;
    char* newString = malloc(n+1);
    for (i=0; i<n; i++) {
        if (i%2==0) {
            newString[j] = string[i];
            j++;
        } 
    }
    newString[j] = '\0';
    return newString;
}

int main(void)
{
    char* s = skipping("", 0);
    printf("%s\n", s);
    free(s);
}