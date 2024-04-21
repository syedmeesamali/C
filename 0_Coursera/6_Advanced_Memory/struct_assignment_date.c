#include <stdio.h>
struct date
{
        int year;
        int month;
        int day;
};

/* function prototypes */
void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date);
int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}
/* Custom functions */
//Read the Date value
void readDate(struct date *now)
{
    scanf("%d %d %d", &now -> year, &now -> month, &now -> day);
}

//Print date function
void printDate(struct date dat)
{
    if (dat.day < 10 && dat.month < 10)
    {
        printf("0%d/0%d/%d\n", dat.month, dat.day, dat.year);
    } else if (dat.day < 10)
    {
        printf("%d/0%d/%d\n", dat.month, dat.day, dat.year);
    } else if (dat.month < 10)
    {
        printf("0%d/%d/%d\n", dat.month, dat.day, dat.year);
    } else
    {
        printf("%d/%d/%d\n", dat.month, dat.day, dat.year);
    }
}

//Advance the date
struct date advanceDay(struct date today)
{
    today.day += 1;
    if (today.month == 1 || today.month == 3 || today.month == 5 || today.month == 7 || today.month == 8 || today.month == 10 || today.month == 12)
    {
        if (today.day > 30)
        {
            today.day = 1;
            if (today.month < 12)
            {
                today.month += 1;
            } else
            {
                today.month = 1;
                today.year += 1;
            }
        }
    } else if (today.month == 4 || today.month == 6 || today.month == 9 || today.month == 11)
    {
        if (today.day > 29)
        {
            today.day = 1;
            today.month += 1;
        }
    }  else
    {
        if (today.day > 27)
        {
            today.day = 1;
            today.month += 1;
        }
    }
    return today;
} //End of struct function
