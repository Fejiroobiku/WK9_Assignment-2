#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAMES 20
#define MAX_LENGTH 100

// Function pointer type for comparison
typedef int (*CompareFunc)(const char*, const char*);

// Comparison for ascending order
int compareAsc(const char *a, const char *b) {
    return strcmp(a, b);
}

// Comparison for descending order
int compareDesc(const char *a, const char *b) {
    return strcmp(b, a);
}

// Bubble sort function using function pointer for comparison
void bubbleSort(char *names[], int size, CompareFunc compare) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (compare(names[j], names[j + 1]) > 0) {
                // Swap pointers
                char *temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
}

int main() {
    char *names[MAX_NAMES];
    char input[10];
    
    // Allocate memory for names
    for (int i = 0; i < MAX_NAMES; i++) {
        names[i] = (char *)malloc(MAX_LENGTH * sizeof(char));
        if (names[i] == NULL) {
            printf("Memory allocation failed for name %d!\n", i + 1);
            return 1;
        }
        printf("Enter name %d: ", i + 1);
        scanf(" %[^\n]", names[i]);
    }
    
    printf("Enter sort order (asc/desc): ");
    scanf("%s", input);
    
    // Choose comparison function
    CompareFunc compare;
    if (strcmp(input, "asc") == 0) {
        compare = compareAsc;
    } else if (strcmp(input, "desc") == 0) {
        compare = compareDesc;
    } else {
        printf("Invalid input. Defaulting to ascending.\n");
        compare = compareAsc;
    }
    
    // Sort names
    bubbleSort(names, MAX_NAMES, compare);
    
    // Print sorted names
    printf("\nSorted Names:\n");
    for (int i = 0; i < MAX_NAMES; i++) {
        printf("%s\n", names[i]);
    }
    
    // Free allocated memory
    for (int i = 0; i < MAX_NAMES; i++) {
        free(names[i]);
    }
    
    return 0;
}