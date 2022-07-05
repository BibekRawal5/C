#include <stdio.h>
#include <conio.h>

int main()
{
    int sec, hr, min;
    printf("Enter number of seconds: ");
    scanf("%d", &sec);

    hr = sec / 3600;
    sec = sec % 3600;

    min = sec / 60;
    sec = sec % 60;

    printf("Time in \n Hours : %d\n Minutes: %d\n Seconds: %d\n", hr, min, sec);
}