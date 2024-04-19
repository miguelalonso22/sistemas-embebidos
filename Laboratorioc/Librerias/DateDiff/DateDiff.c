#include "DateDiff.h"

int validateDates(date_t date1, date_t date2)
{
    if (date1.year > date2.year)
    {
        printf("Por favor, ingrese la fecha más antigua primero\n");
        return 0;

    }
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

int days_left(date_t start, date_t finish)
{
    if (validateDates(start, finish) == 0)
    {   
        printf("Fechas inválidas\n");
        return -1;
    }

    if (start.year == finish.year)
    {
        if (start.month == finish.month)
        {
            return finish.day - start.day;
        }
        else
        {
            int daysLastMonth = 0;
            int daysFirstMonth = 0;
            daysLastMonth += finish.day;
            for (int i = finish.month - 1; i > 0; i--){
                int monthDays = 0;
                monthDays += daysInMonth(i, finish.year);
                // printf("daysInMonth(%d, %d) = %d\n", i, finish.year, monthDays);
                daysLastMonth += monthDays;
            }
            // printf("daysLastMonth = %d\n", daysLastMonth);

            daysFirstMonth += start.day;
            for (int i = start.month - 1; i > 0; i--){
                int monthDays = 0;
                monthDays += daysInMonth(i, start.year);
                // printf("daysInMonth(%d, %d) = %d\n", i, start.year, monthDays);
                daysFirstMonth += monthDays;
            }
            // printf("daysFirstMonth = %d\n", daysFirstMonth);
            return daysLastMonth - daysFirstMonth;
        }
    }
    else
    {
        int daysFirstYear = 0;
        daysFirstYear += (daysInMonth(start.month, start.year) - start.day);
        for (int i = start.month + 1; i <= 12; i++)
        {
            // printf("daysInMonth(%d, %d) = %d\n", i, start.year, daysInMonth(i, start.year));
            daysFirstYear += daysInMonth(i, start.year);
        }
        int daysLastYear = 0;
        daysLastYear += finish.day;
        for (int i = finish.month - 1; i > 0; i--)
        {
            // printf("daysInMonth(%d, %d) = %d\n", i, finish.year, daysInMonth(i, finish.year));
            daysLastYear += daysInMonth(i, finish.year);
        }

        int daysYearsBetween = 0;
        for (int i = start.year + 1; i < finish.year; i++)
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


