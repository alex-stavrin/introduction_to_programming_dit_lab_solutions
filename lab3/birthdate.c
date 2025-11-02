#include <stdio.h>
#include <math.h>

const int birth_day = 20;
const int birth_month = 10;
const int birth_year = 2004;

int main()
{
    int nmonth;
    int nyear;

    if(birth_month <= 2)
    {
        nyear = birth_year - 1;
        nmonth = 0;
    }
    else
    {
        nyear = birth_year;
        nmonth = floor((4 * birth_month + 23) / 10.0);
    }

    int iday = 365 * birth_year + birth_day + 31 * (birth_month - 1) - nmonth + floor(nyear / 4.0) - floor((3.0 / 4.0) * (floor(nyear / 100.0) + 1));

    int day_calc = iday % 7;

    if(day_calc == 0)
    {
        printf("Saturday\n");
    }
    else if(day_calc == 1)
    {
        printf("Sunday\n");
    }
    else if(day_calc == 2)
    {
        printf("Monday\n");
    }
    else if(day_calc == 3)
    {
        printf("Tuesday\n");
    }
    else if(day_calc == 4)
    {
        printf("Wednesday\n");
    }
    else if(day_calc == 5)
    {
        printf("Thursday\n");
    }
    else if(day_calc == 6)
    {
        printf("Friday\n");
    }
    else
    {
        printf("Invalid day\n");
    }
}