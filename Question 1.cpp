#include <stdio.h>

int main()
{
    int marks1, marks2, marks3;
    float attendancePercent, average;

    printf("Enter marks of Programming, Mathematics and AI: ");
    scanf("%d%d%d", &marks1, &marks2, &marks3);

    printf("Enter the attendance percentage: ");
    scanf("%f", &attendancePercent);

    if (marks1 >= 50)
    {
        printf("Programming: Passed\n");
    }
    else
    {
        printf("Programming: Not eligible\n");
        return 0;
    }

    if (marks2 >= 50)
    {
        printf("Mathematics: Passed\n");
    }
    else
    {
        printf("Mathematics: Not eligible\n");
        return 0;
    }

    if (marks3 >= 50)
    {
        printf("AI: Passed\n");
    }
    else
    {
        printf("AI: Not eligible\n");
        return 0;
    }

    if (attendancePercent >= 75)
    {
        printf("Attendance: Eligible\n");

        average = (marks1 + marks2 + marks3) / 3.0;
    }
    else
    {
        printf("Attendance: Not eligible\n");
        return 0;
    }

    if (average >= 80)
    {
        printf("Excellent\n");
    }
    else if (average >= 70)
    {
        printf("Very Good\n");
    }
    else if (average >= 60)
    {
        printf("Good\n");
    }
    else if (average >= 50)
    {
        printf("Satisfactory\n");
    }
    else
    {
        printf("Poor\n");
    }

    return 0;
}
