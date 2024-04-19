#include <stdio.h>
#include <stdlib.h>
#include "del_duplicates.h"

int main(int argc, char **argv) {
    int a[] = {11, 23, 44, 56, 22, 34, 1, 90, 34, 243, 2, 5435, 2, 1, 30, 44, 100, 842, 11, 23};
    unsigned int n = del_duplicates(a, sizeof(a) / sizeof(int));
    for (unsigned int i = 0; i < n; i++) {
        printf("%d", *(a + i));
        if (i + 1 !=  n)
            printf(", ");
    }
    printf("\n");

    return 0;
}
