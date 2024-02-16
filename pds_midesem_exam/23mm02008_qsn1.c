#include<stdio.h>
#define pi 3.14
int main(){
    float r;
    printf ("the radius of the sphere is : ");
    scanf("%f", &r);
    float vos=4/3*pi*r*r*r;
    float soas=4*pi*r*r;
    printf("the volume of the sphere is : %.2f",vos);
    printf("the surface of the sphere is : %.2f",soas);
    return 0;
}