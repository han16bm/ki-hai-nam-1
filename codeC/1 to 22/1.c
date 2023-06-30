#include <stdio.h>

int main() {
    int days, year, week, day;
    scanf("%d", &days);

    year = days / 365;
    days = days % 365;

    week = days / 7;
    days = days % 7;

    day = days;

    printf("%d %d %d", year, week, day);

    return 0;
}
