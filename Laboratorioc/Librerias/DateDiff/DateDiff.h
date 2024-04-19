#ifndef DATEDIFF_H
#define DATEDIFF_H
#include <stdio.h>

typedef struct date_t
{
    int day;
    int month;
    int year;
} date_t;

// Al ingresar dos fechas encuentre la diferencia, en días, entre ellas.
int days_left(date_t start, date_t finish);
int vicieso(int year);
int daysInMonth(int month, int year);
int dateDifference(date_t date1, date_t date2);

#include "DateDiff.c"
#endif