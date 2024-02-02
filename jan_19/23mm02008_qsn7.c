#include <stdio.h>
#include <math.h>
int main(){
    float mealCost,tipPercent,taxpercent;
printf("mealcost is: ");
    scanf("%f", &mealCost);
    printf("tippercent is: ");
    scanf("%f", &tipPercent);
    printf("taxpercent is : ");
    scanf("%f", &taxpercent);

 float tip, tax,totalmealCost;
 tip=mealCost*(tipPercent/100);
 tax=mealCost*(taxpercent/100);
 totalmealCost=(mealCost + tip+tax);

 printf("The total cost of the meal is: %d\n", (int)round(totalmealCost));
    return 0;
}


