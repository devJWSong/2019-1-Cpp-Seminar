#include <stdio.h>

int main() {

    char str[20];
    fgets(str, 20, stdin);

    char ebubu[6];
    fgets(ebubu, 6, stdin);

    printf("%s", str);
    printf("%s", ebubu);

    return 0;
}