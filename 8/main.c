#include <stdio.h>

int main() {

    int n, y;
    scanf("%d %d", &n, &y);

    int c, sum;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n - i; j++) {
            c = n - (i + j);
            sum = 10000 * i + 5000 * j + 1000 * c;
            if (sum == y) {
                printf("%d %d %d", i, j, c);
                return 0;

            }
        }
    }
    printf("-1 -1 -1");

}
