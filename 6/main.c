#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int compareInt(const void *a, const void *b) {
    int aNum = *(int *) a;
    int bNum = *(int *) b;

    return bNum - aNum;
}

int main() {
    int n, res = 0;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    qsort(array, SIZE_OF_ARRAY(array), sizeof(int), compareInt);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            res += array[i];
        } else {
            res -= array[i];
        }
    }

    printf("%d\n", res);
}