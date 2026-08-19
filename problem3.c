#include <stdio.h>

int main()
{
    int id = 262400087;

    int year = id / (365 * 24 * 60 * 60);
    id = id % (365 * 24 * 60 * 60);

    int month = id / (30 * 24 * 60 * 60);
    id = id % (30 * 24 * 60 * 60);

    int week = id / (7 * 24 * 60 * 60);
    id = id % (7 * 24 * 60 * 60);

    int day = id / (24 * 60 * 60);
    id = id % (24 * 60 * 60);

    int hour = id / (60 * 60);
    id = id % (60 * 60);

    int minute = id / 60;

    printf("Year: %d\n", year);
    printf("Month: %d\n", month);
    printf("Week: %d\n", week);
    printf("Day: %d\n", day);
    printf("Hour: %d\n", hour);
    printf("Minute: %d\n", minute);

    return 0;
}