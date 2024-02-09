#include <stdio.h>
int main()
{
    int a;
    int sp=50;
    scanf("%d", &a);
    if(a<5)
    printf("Free");
    else if(a>=5 && a<=12)
    printf("Ticket Price 20");
    else if(a>12 && a<=59)
    printf("Ticket Price 50");
    else
    printf("Ticket Price is %d\n",50-(50*20/100));
    return 0;
}