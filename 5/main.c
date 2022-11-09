#include <stdio.h>

int digits(int n);

int main() {
    int n, min, max, sum = 0;
    scanf("%d%d%d", &n, &min, &max);

    for (int i = 1; i <= n; i++) {
        if (min <= digits(i) && digits(i) <= max) {
            sum += i;
        }
    }

    printf("%d\n", sum);

    return 0;
}

int digits(int n) {
    int res = 0;
    while (n != 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
