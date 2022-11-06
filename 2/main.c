#include <stdio.h>

int main() {
    int i, ans = 0;
    char str[4];
    scanf("%s", str);

    for (i = 0; i < 3; i++) {
        if (str[i] == '1') {
            ans += 1;
        }
    }
    printf("%d\n", ans);

    return 0;
}