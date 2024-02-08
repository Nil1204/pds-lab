#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n = a%2;
    switch(n)
    {
        case 0: printf("Even\n");
                break;
        case 1: printf("Odd\n");
                break;
        case -1: printf("Odd\n");
                break;
    }
    return 0;
}