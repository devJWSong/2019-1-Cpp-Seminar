#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);

    int *arr;
    arr = (int*) malloc(n * sizeof(int));

    free(arr);
    arr = '\0';

    return 0;
}