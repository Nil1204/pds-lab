#include <stdio.h>

int main(){
    printf("Enter the three sides: ");
    int a, b, c; scanf("%d %d %d", &a, &b, &c);
    ;
    if ((a+b > c) && (a+c > b) && (b+c > a)){
        printf("Triangle is valid.\n");
    } else {
        printf("Triangle is not valid.\n");
    }
}   