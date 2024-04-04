#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

typedef struct Date
{
    int day;
    int month;
    int year;
} Date;

int vicieso(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/*/
int daysInMonth(int month, int year) {
    int days;
    if (month == 2) {
        if (vicieso(year) == 1) {
            days = 29;
        } else {
            days = 28;
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    } else {
        days = 31;
    }
    return days;
}
/*/

int daysInMonth(int month, int year)
{
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        return 31;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    case 2:
        // Check for leap year
        if (vicieso(year) == 1)
        {
            // printf("Leap year\n");
            return 29;
        }
        else
        {
            // printf("Not leap year\n");
            return 28;
        }
    default:
        return -1; // Invalid month
    }
}

int dateDifference(Date date1, Date date2)
{
    if (date1.year == date2.year)
    {
        if (date1.month == date2.month)
        {
            return date2.day - date1.day;
        }
        else
        {
            int daysLastMonth = 0;
            int daysFirstMonth = 0;
            daysLastMonth += date2.day;
            for (int i = date2.month - 1; i > 0; i--){
                int monthDays = 0;
                monthDays += daysInMonth(i, date2.year);
                printf("daysInMonth(%d, %d) = %d\n", i, date2.year, monthDays);
                daysLastMonth += monthDays;
            }
            printf("daysLastMonth = %d\n", daysLastMonth);

            daysFirstMonth += date1.day;
            for (int i = date1.month - 1; i > 0; i--){
                int monthDays = 0;
                monthDays += daysInMonth(i, date1.year);
                printf("daysInMonth(%d, %d) = %d\n", i, date1.year, monthDays);
                daysFirstMonth += monthDays;
            }
            printf("daysFirstMonth = %d\n", daysFirstMonth);
            return daysLastMonth - daysFirstMonth;
        }
    }
    else
    {
        int daysFirstYear = 0;
        daysFirstYear += (daysInMonth(date1.month, date1.year) - date1.day);
        for (int i = date1.month + 1; i <= 12; i++)
        {
            // printf("daysInMonth(%d, %d) = %d\n", i, date1.year, daysInMonth(i, date1.year));
            daysFirstYear += daysInMonth(i, date1.year);
        }
        int daysLastYear = 0;
        daysLastYear += date2.day;
        for (int i = date2.month - 1; i > 0; i--)
        {
            // printf("daysInMonth(%d, %d) = %d\n", i, date2.year, daysInMonth(i, date2.year));
            daysLastYear += daysInMonth(i, date2.year);
        }

        int daysYearsBetween = 0;
        for (int i = date1.year + 1; i < date2.year; i++)
        {
            int daysOfYear = 0;
            if (vicieso(i) == 1)
            {
                daysOfYear += 366;
            }
            else
            {
                daysOfYear += 365;
            }
            daysYearsBetween += daysOfYear;
        }
        // printf("daysFirstYear = %d\n", daysFirstYear);
        // printf("daysLastYear = %d\n", daysLastYear);
        // printf("daysYearsBetween = %d\n", daysYearsBetween);
        return daysFirstYear + daysLastYear + daysYearsBetween;
    }

    return 0;
}

int validateDates(Date date1, Date date2)
{
    if (date1.year < 0 || date2.year < 0)
    {
        return 0;
    }
    if (date1.month < 1 || date1.month > 12 || date2.month < 1 || date2.month > 12)
    {
        return 0;
    }
    if (date1.day < 1 || date1.day > daysInMonth(date1.month, date1.year) || date2.day < 1 || date2.day > daysInMonth(date2.month, date2.year))
    {
        return 0;
    }
    return 1;
}

int main()
{

    Date date1, date2;
    // date1.day = 4;
    // date1.month = 2;
    // date1.year = 2024;

    // date2.day = 28;
    // date2.month = 2;
    // date2.year = 2025;
    
    dateDifference(date1, date2);
    printf("Enter first date (dd mm yyyy): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);
    printf("Enter second date (dd mm yyyy): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);
    if (validateDates(date1, date2) == 0)
    {
        printf("Invalid dates\n");
        return 0;
    }
    printf("Difference between dates is %d days\n", dateDifference(date1, date2));
    return 0;
}