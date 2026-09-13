#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c) {
        printf("All three numbers are equal and greatest.");
    }
    else if (a == b && a > c) {
        printf("%d and %d are equal and greatest.", a, b);
    }
    else if (a == c && a > b) {
        printf("%d and %d are equal and greatest.", a, c);
    }
    else if (b == c && b > a) {
        printf("%d and %d are equal and greatest.", b, c);
    }
    else if (a > b && a > c) {
        printf("%d is the greatest.", a);
    }
    else if (b > a && b > c) {
        printf("%d is the greatest.", b);
    }
    else {
        printf("%d is the greatest.", c);
    }

    return 0;
}
