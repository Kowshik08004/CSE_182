#include <stdio.h>

int main() {
    int days, years, months, weeks;

    printf("Enter number of Days: ");
    scanf("%d", &days);

    years = days/365;

    days = days - years*365;
    months = days/30;

    days = days - months*30;
    weeks = days/7;

    days = days - weeks*7;

    printf("Years : %d\n", years);
    printf("Months : %d\n", months);
    printf("Weeks : %d\n", weeks);
    printf("Days : %d", days);

    return 0;
}
