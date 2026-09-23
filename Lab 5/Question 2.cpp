#include <stdio.h>

int main()
{
    int age, credit_score, monthly_income;
    char Loan_status;

    printf("Input Age: ");
    scanf("%d", &age);

    printf("Monthly income: ");
    scanf("%d", &monthly_income);

    printf("Credit score: ");
    scanf("%d", &credit_score);

    if (age == 21)
    {
        if (monthly_income >= 100000 && credit_score >= 750)
        {
            printf("Enter Loan_status (Y/N): ");
            scanf(" %c", &Loan_status);

            if (Loan_status == 'N')
            {
                printf("High Approval Chance");
            }
            else
            {
                printf("Not eligible");
            }
        }
        else if (monthly_income >= 75000 && credit_score >= 650)
        {
            printf("Enter Loan_status (Y/N): ");
            scanf(" %c", &Loan_status);

            if (Loan_status == 'Y')
            {
                printf("Medium Review");
            }
            else
            {
                printf("Not eligible");
            }
        }
        else if (monthly_income >= 50000 && credit_score >= 600)
        {
            printf("Possible");
        }
        else
        {
            printf("Not eligible");
        }
    }
    else
    {
        printf("Not eligible");
    }

    return 0;
}
