#include <stdio.h>

int main() {
    int a, b, c, x, i, j, k, count = 0;
    scanf("%d%d%d%d", &a, &b, &c, &x);

    for (i = 0; i <= a; i++) {
        for (j = 0; j <= b; j++) {
            for (k = 0; k <= c; k++) {
                if ((500 * i) + (100 * j) + (50 * k) == x) {
                    count++;
                }
            }
        }
    }

    printf("%d", count);
}