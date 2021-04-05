#include <stdio.h>

int main(void)
  {
    int number;

    printf("is this even or odd?\n");

    printf("Enter an integer: ");
    scanf("%d", &number);


    if  (number%2 == 0)
    {
        printf("%d is an even integer.",number);
    }
    else
    {
        printf("%d is an odd integer.\n",number);
    }

}
