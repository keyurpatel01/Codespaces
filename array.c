/*
Array: it is a collection of data of similar data
*/
#include <stdio.h>
int main()
{
    int a[5] = {37, 50, 67, 50, 40}, total = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("\nSubject %d : Marks %d\n", i + 1, a[i]);
        total = total + a[i];
    }
    printf("\ntotal: %d", total);

    int temp[7] = {23, 34, 54, 35, 20, 36, 44};
    for (int i = 0; i < 7; i++)
    {
        printf("\nDay %d : Temp %d\n", i + 1, temp[i]);
    }

    int score[4] = {100, 123, 178, 230};
    for (int i = 0; i < 4; i++)
    {
        printf("\nPlayer %d : Score %d\n", i + 1, score[i]);
    }

    return 0;
}