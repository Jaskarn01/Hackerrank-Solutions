#include <stdio.h>

int main() {
    int n, k; scanf("%d %d", &n, &k);
    int max = 0;
    for (int i=0; i<n; i++) {
        int x; scanf("%d", &x);
        if (x > max) {
            max = x;
        }
    }
    int result = 0;
    if (max > k) {result = max-k;}
    printf("%d", result);
}