#include <stdio.h>

int main() {
    int total, missing, duplicate;
    float missingPercentage, duplicatePercentage;

    printf("Enter total records: ");
    scanf("%d", &total);

    printf("Enter missing records: ");
    scanf("%d", &missing);

    printf("Enter duplicate records: ");
    scanf("%d", &duplicate);

    if (total <= 0) {
        printf("Invalid Dataset");
    }
    else {
        missingPercentage = (missing * 100.0) / total;
        duplicatePercentage = (duplicate * 100.0) / total;

        printf("Missing Data Percentage = %.2f%%\n", missingPercentage);

        if (missingPercentage > 30) {
            printf("Poor Quality Dataset");
        }
        else if (duplicatePercentage > 20) {
            printf("Dataset Requires Cleaning");
        }
        else {
            printf("Dataset Ready for Training");
        }
    }

    return 0;
}
