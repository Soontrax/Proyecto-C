#include<stdio.h>

void chooseDay(int day)
{
    if(day == 0 || day > 7)
    {
        printf("Error");
    }

    switch(day)
    {
    case 1:
        printf("It's Monday");
        break;
    case 2:
        printf("It's Tuesday");
        break;
    case 3:
        printf("It's Wednesday");
        break;
    case 4:
        printf("It's Thursday");
        break;
    case 5:
        printf("It's Friday!!!");
        break;
    case 6:
        printf("It's Saturday");
        break;
    case 7:
        printf("It's Sunday");
        break;
    }
}




void main()
{
    printf("Welcome to the day center \n");
    printf("Introduce a number of the weekend: ");
    int number;
    scanf("%d", &number);
    printf("The number is %d \n", number);
    chooseDay(number);
}



