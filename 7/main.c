#include <stdio.h>
#include <stdlib.h>

#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))

int compareInt(const void *a, const void *b) {
    int aNum = *(int *) a;
    int bNum = *(int *) b;

    return aNum - bNum;
}

int main() {
    int n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    qsort(array, SIZE_OF_ARRAY(array), sizeof(int), compareInt);

    int ans = 1;
    for (int i = 1; i < n; i++) {
        if (array[i - 1] != array[i]) {
            ans++;
        }
    }

    printf("%d\n", ans);

}
