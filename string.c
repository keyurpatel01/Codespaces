#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "tops";
    printf("\n%s\n", name);

    char str[4] = {'H', 'E', 'L', '\0'};
    printf("\n%s\n", str);

    char username[20];
    char actual_username[] = "admin";
    printf("enter username: ");
    scanf("%s", username);
    if (strcmp(actual_username, username) == 0)
    {
        printf("Correct Username");
    }
    else
    {
        printf("Incorrect Username");
    }

    char rev[] = "Hello";
    char rev2[] = "World";
    // strrev(rev);

    return 0;
}