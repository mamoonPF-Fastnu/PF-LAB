#include <stdio.h>

int main()
{
    int arr[20];   // Extra space for insertion
    int i, largest, smallest;
    int search, found = -1;
    int newNum, index;
    int size = 8;

    // Input
    printf("Enter 8 elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print array
    printf("\nArray: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Largest and smallest
    largest = smallest = arr[0];

    for(i = 1; i < size; i++)
    {
        if(arr[i] > largest)
            largest = arr[i];

        if(arr[i] < smallest)
            smallest = arr[i];
    }

    printf("\nLargest = %d", largest);
    printf("\nSmallest = %d\n", smallest);

    // Search
    printf("\nEnter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < size; i++)
    {
        if(arr[i] == search)
        {
            found = i;
            break;
        }
    }

    if(found != -1)
        printf("Found at index %d\n", found);
    else
        printf("Not found\n");

    // Insertion
    printf("\nEnter index for insertion (0-%d): ", size);
    scanf("%d", &index);

    printf("Enter new number: ");
    scanf("%d", &newNum);

    for(i = size; i > index; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[index] = newNum;
    size++;

    printf("\nArray after insertion: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    // Deletion
    printf("\n\nEnter index to delete: ");
    scanf("%d", &index);

    for(i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }

    size--;

    printf("\nFinal Array: ");
    for(i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
