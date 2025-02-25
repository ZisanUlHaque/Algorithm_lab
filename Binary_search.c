#include <stdio.h>

int main() {
    int i, n, a[100], item, Beg, End, Mid;

    printf("\n Enter the range of the array: ");
    scanf("%d", &n);

    printf("\n Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("\n After Traversing: ");
    for (i = 0; i < n; i++) {
        printf("%4d", a[i]);
    }

    printf("\n Enter the element to search: ");
    scanf("%d", &item);

    Beg = 0;
    End = n - 1;

    // Binary search loop
    while (Beg <= End) {
        Mid = (Beg + End) / 2;

        if (a[Mid] == item) {
            printf("%d is found at %d location\n", item, Mid + 1);
            break;
        }

        else if (item > a[Mid]) 
        {
            Beg = Mid + 1;        // Move right
        } else 
        {
            End = Mid - 1;        // Move left
        }
    }

    if (Beg > End) {
        printf("Item is not found\n");            // If the element is not found
    }

    return 0;
}