#include <stdio.h>

int main()
{
    int age, year;

    printf("I will be counting how manay days you've been alive");

    printf("\nenter your age: ");
    scanf("%d", &age);

    printf("then times age with 365: ");
    scanf("%d", &year);

    printf("you have been alive for at least %d times %d which is %d days", age, year, age*year );
}
