// program to allocate and free dynamic memory
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *ptr;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    ptr = (int *)malloc(n * sizeof(int));

    // Check allocation success
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input elements
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    // Display elements
    printf("You entered:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    printf("\nMemory successfully freed.\n");

    return 0;
}