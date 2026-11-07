#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", i);
            } else {
                printf(" %d", i);
            }
        }
        printf("\n");
    }

    return 0;
}
