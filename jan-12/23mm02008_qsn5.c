#include <stdio.h>

int main(){
    // Part (a)
    printf("part (a)\n");
    int a = 19, b = 12, c = 123, d = 1234, e = 12345;
    printf("%5.d\n", a);
    printf("%.5d\n", b);
    printf("%.5d\n", c);
    printf("%.5d\n", d);
    printf("%.5d\n", e);

    //Part (b)
    printf("\npart (b)\n");
    char p[] = "a", q[] = "ab", r[] = "abc", s[] = "abcd", t[] = "abcde";
    printf("%5.1s\n", p);
    printf("%5.2s\n", q);
    printf("%5.3s\n", r);
    printf("%5.4s\n", s);
    printf("%5.5s\n", t);
    return 0;
}