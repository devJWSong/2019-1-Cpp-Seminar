#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "This is String 1";
    char str2[20];

    strcpy(str2, str1);

    printf("%s\n", str2);

    return 0;
}