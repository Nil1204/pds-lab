#include <stdio.h>

int main() {
    int totaldays, years, months, weeks, days;
    printf("Enter the total number of days: ");
    scanf("%d", &totaldays);
    years = totaldays / 365;
    int remainingDays = totaldays % 365;
    months = remainingDays / 30;
    weeks = remainingDays / 7;
    days = remainingDays % 7;

    printf("Years: %d\n", years);
    printf("Months: %d\n", months);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", days);

    return 0;
}
