#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>


typedef struct Date {
    int day;
    int month;
    int year;
} Date;

int vicieso(int year){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1;
    } else {
        return 0;
    }
}

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

int dateDifference(Date date1, Date date2) {
    int days = 0;
    if (date1.year == date2.year && date1.month == date2.month && date1.day == date2.day) {
        return 0;
    }
    if (date1.year == date2.year && date1.month == date2.month) {
        return abs(date1.day - date2.day);
    }
    if (date1.year == date2.year) {
        if (date1.month == date2.month) {
            return abs(date1.day - date2.day);
        }
        if (date1.month > date2.month) {
            Date temp = date1;
            date1 = date2;
            date2 = temp;
        }
        for (int i = date1.month; i < date2.month; i++) {
            days += daysInMonth(i, date1.year);
        }
        days += daysInMonth(date1.month, date1.year) - date1.day;
        days += date2.day;
        return days;
    }
    if (date1.year > date2.year) {
        Date temp = date1;
        date1 = date2;
        date2 = temp;
    }
    for (int i = date1.year; i < date2.year; i++) {
        if (vicieso(i) == 1) {
            days += 366;
        } else {
            days += 365;
        }
    }
    for (int i = date1.month; i <= 12; i++) {
        days += daysInMonth(i, date1.year);
    }
    days -= date1.day;
    for (int i = 1; i < date2.month; i++) {
        days += daysInMonth(i, date2.year);
    }
    days += date2.day;
    return days;
}