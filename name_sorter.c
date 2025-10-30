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
