#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int num_arr[n];

    int i, tmp;
    for (i = 0; i < n; i++) {
        int j = 0;
        scanf("%d",&tmp);
        while (tmp % 2 == 0) {
            tmp /= 2;
            j++;
        }
        num_arr[i] = j;
    }

    int min = num_arr[0];
    for (i = 1; i < n; i++) {
        if (min > num_arr[i]) {
            min = num_arr[i];
        }
    }
    printf("%d\n", min);

}