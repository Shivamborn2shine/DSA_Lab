#include <stdio.h>
#include <stdlib.h>

void use_malloc_call_by_value(int size) {
    // Using malloc to allocate memory
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return;
    }

    // Initialize the array with some values using malloc
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    printf("Array after malloc (call by value):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Using calloc to allocate memory
    int *calloc_arr = (int *)calloc(size, sizeof(int)); // Initializes memory to zero
    if (calloc_arr == NULL) {
        printf("Memory allocation failed using calloc.\n");
        free(arr); // Free previously allocated memory before returning
        return;
    }

    printf("Array after calloc (call by value):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", calloc_arr[i]); // This will print zeros as calloc initializes to 0
    }
    printf("\n");

    // Using realloc to resize the array
    int new_size = size * 2;  // Double the size of the array
    int *realloc_arr = (int *)realloc(arr, new_size * sizeof(int));
    if (realloc_arr == NULL) {
        printf("Memory allocation failed using realloc.\n");
        free(arr);
        free(calloc_arr);
        return;
    }

    // Initialize the newly allocated elements with values
    for (int i = size; i < new_size; i++) {
        realloc_arr[i] = i + 1;
    }

    printf("Array after realloc (call by value):\n");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", realloc_arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(realloc_arr);
    free(calloc_arr);
}

int main() {
    int size = 5;

    // Call the function to use malloc, calloc, and realloc
    use_malloc_call_by_value(size);

    return 0;
}
