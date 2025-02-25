#include <stdio.h>
void quicksort(int a[], int first, int last) {
    int i, j, pivot, temp;
    
    if (first < last) {
        pivot = first;  // Choose the first element as the pivot
        i = first;
        j = last;

        while (i < j) {
            while (a[i] <= a[pivot] && i < last)   // Increment i until an element greater than the pivot is found
                i++;
           
            while (a[j] > a[pivot])  // Decrement j until an element smaller than the pivot is found
                j--;
           
            if (i < j)         // Swap a[i] and a[j] if i is less than j
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[pivot];   // Swap the pivot element with a[j]
        a[pivot] = a[j];
        a[j] = temp;

        // Recursively apply quicksort to the subarrays
        quicksort(a, first, j - 1);
        quicksort(a, j + 1, last);
    }
}

int main() {
    int i, n, a[100];

    printf("\nEnter the range of the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    quicksort(a, 0, n - 1);

    printf("\nAfter sorting: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}