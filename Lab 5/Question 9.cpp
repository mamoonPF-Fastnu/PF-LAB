#include <stdio.h>
#include <math.h>

int main()
{
    int choice, base, exp;
    float sqroot, sqrnum, absnum;

    printf("-- Enter the Function you wanna perform:\n");
    printf("Square Root :(1)\n");
    printf("Power :(2)\n");
    printf("Absolute :(3)\n");
    printf("Floor :(4)\n");
    printf("Ceiling :(5)\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter number for its square root:\n");
            scanf("%f", &sqrnum);

            if (sqrnum < 0)
            {
                printf("Invalid input");
                return 0;
            }

            sqroot = sqrt(sqrnum);
            printf("The square root is %.2f\n", sqroot);
            break;

        case 2:
            printf("Enter the Base and Exponent: ");
            scanf("%d %d", &base, &exp);

            printf("The power of the exponent to the base is %.2f\n",
                   pow(base, exp));
            break;

        case 3:
            printf("Enter the number (+ve or -ve): ");
            scanf("%f", &absnum);

            printf("Absolute value is %.2f\n", fabs(absnum));
            break;

        case 4:
            printf("Enter the number for Floor value: ");
            scanf("%f", &sqrnum);

            printf("Floor value is %.0f\n", floor(sqrnum));
            break;

        case 5:
            printf("Enter the number for Ceiling value: ");
            scanf("%f", &sqrnum);

            printf("Ceiling value is %.0f\n", ceil(sqrnum));
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
