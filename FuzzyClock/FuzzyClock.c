#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    // current system time
    time_t sysTime = time(NULL);
    struct tm *sysTime_tm = localtime(&sysTime);
    int hour = sysTime_tm->tm_hour;
    int minutes = sysTime_tm->tm_min;

    char *fuzzy2; // holds the minutes
    char *fuzzy1; // holds the hour

    // translates int minutes to (c) string fuzzy2
    if (minutes >= 0 && minutes < 5)
    {
        fuzzy2 = "around ";
    }
    else if (minutes >= 5 && minutes < 10)
    {
        fuzzy2 = "five after ";
    }
    else if (minutes >= 10 && minutes < 15)
    {
        fuzzy2 = "ten after ";
    }
    else if (minutes >= 15 && minutes < 20)
    {
        fuzzy2 = "a quarter after ";
    }
    else if (minutes >= 20 && minutes < 25)
    {
        fuzzy2 = "twenty after ";
    }
    else if (minutes >= 25 && minutes < 30)
    {
        fuzzy2 = "twenty-five after ";
    }
    else if (minutes >= 30 && minutes < 35)
    {
        fuzzy2 = "half past ";
    }
    else if (minutes >= 35 && minutes < 40)
    {
        fuzzy2 = "twenty-five to ";
    }
    else if (minutes >= 40 && minutes < 45)
    {
        fuzzy2 = "twenty to ";
    }
    else if (minutes >= 45 && minutes < 50)
    {
        fuzzy2 = "a quarter to ";
    }
    else if (minutes >= 50 && minutes < 55)
    {
        fuzzy2 = "ten to ";
    }
    else if (minutes >= 55 && minutes < 57)
    {
        fuzzy2 = "five to ";
    }
    else if (minutes >= 57 && minutes <= 59)
    {
        fuzzy2 = "just about ";
    }
    else
    {
        printf("Time not set!\n");
    }

    // if minutes is after 35, advance the hour
    if (minutes >= 35)
    {
        hour = hour + 1;
    }

    // translates int hour to (c) string fuzzy1
    if (hour == 1 || hour == 13)
    {
        fuzzy1 = "one";
    }
    else if (hour == 2 || hour == 14)
    {
        fuzzy1 = "two";
    }
    else if (hour == 3 || hour == 15)
    {
        fuzzy1 = "three";
    }
    else if (hour == 4 || hour == 16)
    {
        fuzzy1 = "four";
    }
    else if (hour == 5 || hour == 17)
    {
        fuzzy1 = "five";
    }
    else if (hour == 6 || hour == 18)
    {
        fuzzy1 = "six";
    }
    else if (hour == 7 || hour == 19)
    {
        fuzzy1 = "seven";
    }
    else if (hour == 8 || hour == 20)
    {
         fuzzy1 = "eight";
    }
    else if (hour == 9 || hour == 21)
    {
        fuzzy1 = "nine";
    }
    else if (hour == 10 || hour == 22)
    {
        fuzzy1 = "ten";
    }
    else if (hour == 11 || hour == 23)
    {
        fuzzy1 = "eleven";
    }
    else if (hour == 12 || hour == 24)
        if (hour == 12)
        {
            fuzzy1 = "noon";
        }
        else
        {
            fuzzy1 = "midnight";
        }
    else
    {
        printf("Time not set!\n");
    }

    //putting it all together
    char fuzzy[50];
    strcpy(fuzzy, fuzzy2);
    strcat(fuzzy, fuzzy1);
    printf("It is %s\n", fuzzy);

    return 0;
}
