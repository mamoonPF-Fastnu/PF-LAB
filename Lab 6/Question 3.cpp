#include <stdio.h>

int main()
{
    int i, status;
    int present = 0, absent = 0;

    for (i = 1; i <= 15; i++)
    {
        printf("Enter 1 for Present, 0 for Absent for student %d: ", i);
        scanf("%d", &status);

        if (status == 1)
            present++;
        else if (status == 0)
            absent++;
        else
            printf("Invalid input\n");
    }

    printf("Present students = %d\n", present);
    printf("Absent students = %d\n", absent);

    return 0;
}
