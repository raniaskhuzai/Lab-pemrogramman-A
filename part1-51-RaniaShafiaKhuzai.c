#include <stdio.h>

int main()
 {
    int i;
    char username[100], job[50];

    printf("this program generates your username and job description");
    printf("\n enter a name that pleases you: ");
    scanf("%[^\n]", username);

    printf("enter your job description: ");
    scanf(" %[^\n]", job);

    printf("\n enter your favorite number: ");
    scanf(" %d", &i);

    printf("my name is %s%d ", username, i);
    printf("and i am a %s\n", job);
}
