#include <stdio.h>

int main() {
    int a, b, c, max;
    printf("Input three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("Largest number is %d\n", max);
    return 0;
}
