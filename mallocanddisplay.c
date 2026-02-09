// program  to allocate memory using malloc and display value
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocating memory using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check if memory allocation is successful
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Displaying output
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Freeing allocated memory
    free(ptr);

    return 0;
}

