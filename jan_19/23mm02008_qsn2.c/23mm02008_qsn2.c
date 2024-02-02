#include <stdio.h>

int main() {
    int p, q, r, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &p, &q, &r);
    max = (p > q) ? ((p > r) ? p : r) : ((q > r) ? q : r);
    printf("The maximum of three numbers is: %d\n", max);
    return 0;
}
