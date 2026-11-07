#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int mid = (n + 1) / 2;
    for (int i = 1; i <= n; i++) {
        int k;
        if (i <= mid) {
            k = i;
        } else {
            k = n - i + 1;
        }

        for (int j = 1; j <= k; j++) {
            printf("*");
        }

        int spaces = (2 * n - 1) - 2 * k;
        for (int j = 1; j <= spaces; j++) {
            printf(" ");
        }

        for (int j = 1; j <= k; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
