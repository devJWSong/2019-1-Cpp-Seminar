#include <iostream>

using namespace std;

int main() {

    int arr1[5];
    printf("%d %d %d %d %d\n", arr1[0], arr1[1], arr1[2], arr1[3], arr1[4]);

    int arr2[5] = {1, 3, 5, 7, 9};
    printf("%d %d %d %d %d\n", arr2[0], arr2[1], arr2[2], arr2[3], arr2[4]);

    int arr3[5] = {1, 3, 5};
    printf("%d %d %d %d %d\n", arr3[0], arr3[1], arr3[2], arr3[3], arr3[4]);

    int arr4[5] = {0, };
    printf("%d %d %d %d %d\n", arr4[0], arr4[1], arr4[2], arr4[3], arr4[4]);

    char arr5[5] = {'\0', };
    printf("%c %c %c %c %c\n", arr5[0], arr5[1], arr5[2], arr5[3], arr5[4]);

    bool arr6[5] = {false, };
    printf("%d %d %d %d %d\n", arr6[0], arr6[1], arr6[2], arr6[3], arr6[4]);

    float arr7[5] = {0.0, };
    printf("%f %f %f %f %f\n", arr7[0], arr7[1], arr7[2], arr7[3], arr7[4]);

    // int arr8[5] = {1, 2, 3, 4, 5, 6};
    // printf("%d %d %d %d %d\n", arr8[0], arr8[1], arr8[2], arr8[3], arr8[4]);

    int arr9[] = {1, 2, 3, 4, 5};
    printf("%d %d %d %d %d\n", arr9[0], arr9[1], arr9[2], arr9[3], arr9[4]);

    return 0;
}