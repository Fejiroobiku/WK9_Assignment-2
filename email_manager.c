#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INITIAL_SIZE 10
#define FINAL_SIZE 6
#define MAX_EMAIL_LENGTH 100

int main() {
    // Allocate memory for 10 email addresses
    char **emails = (char **)malloc(INITIAL_SIZE * sizeof(char *));
    if (emails == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for each email string
    for (int i = 0; i < INITIAL_SIZE; i++) {
        emails[i] = (char *)malloc(MAX_EMAIL_LENGTH * sizeof(char));
        if (emails[i] == NULL) {
            printf("Memory allocation failed for email %d!\n", i + 1);
            return 1;
        }
        printf("Enter email %d: ", i + 1);
        scanf(" %[^\n]", emails[i]);
    }

    // Print original emails
    printf("\nOriginal Emails (10 students):\n");
    for (int i = 0; i < INITIAL_SIZE; i++) {
        printf("%s\n", emails[i]);
    }

    // Shrink array to 6 students
    char **temp = (char **)realloc(emails, FINAL_SIZE * sizeof(char *));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        // Free original memory before exiting
        for (int i = 0; i < INITIAL_SIZE; i++) {
            free(emails[i]);
        }
        free(emails);
        return 1;
    }
    emails = temp;
    
    // Print emails after shrinking
    printf("\nEmails after shrinking to 6 students:\n");
    for (int i = 0; i < FINAL_SIZE; i++) {
        printf("%s\n", emails[i]);
    }
    
    // Free allocated memory
    for (int i = 0; i < FINAL_SIZE; i++) {
        free(emails[i]);
    }
    free(emails);
    
    return 0;
}
