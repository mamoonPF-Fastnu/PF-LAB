#include <stdio.h>

int main()
{
    int n, i;
    long long catalan = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        catalan = catalan * (2 * n - i);
        catalan = catalan / (i + 1);
    }

    catalan = catalan / (n + 1);

    printf("Catalan number = %lld", catalan);

    return 0;
}
