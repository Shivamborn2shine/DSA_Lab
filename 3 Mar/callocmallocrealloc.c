#include <stdio.h>
#include <stdlib.h>

void use_malloc_call_by_reference(int **arr, int size) {
    *arr = (int *)malloc(size * sizeof(int));
    if (*arr == NULL) {
        printf("Memory allocation failed using malloc.\n");
        return;
    }

    // Initialize the array with some values
    for (int i = 0; i < size; i++) {
        (*arr)[i] = i + 1;
    }

    printf("Array after malloc (call by reference):\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", (*arr)[i]);
    }
    printf("\n");
}

int main() {
    int *arr = NULL;
    int size = 5;

    use_malloc_call_by_reference(&arr, size);

    free(arr);

    return 0;
}
