#include <stdio.h>
int main(void)
{
    int day;
    printf("Enter the day of week: ");
    scanf("%d",&day);

    switch(day)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tusday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thusday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Wrong Enty");
    }

    return 0;
}