#include <stdio.h>

int main() {
    float score;

    printf("Enter confidence score: ");
    scanf("%f", &score);

    if (score < 0 || score > 100) {
        printf("Invalid Score");
    }
    else if (score <= 49) {
        printf("Low Confidence");
    }
    else if (score <= 79) {
        printf("Moderate Confidence");
    }
    else {
        printf("High Confidence");
    }

    return 0;
}
