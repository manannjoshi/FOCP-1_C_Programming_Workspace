#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", count);
            } else {
                printf(" %d", count);
            }
            count++;
        }
        printf("\n");
    }

    return 0;
}
