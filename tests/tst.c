#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

#define NUMBERS_COUNT 500
#define TEST_CASES 500
#define MAX_MOVES 5500
#define BUFFER_SIZE 4096

// Structure to store the test case information
typedef struct {
    int numbers[NUMBERS_COUNT];
    int moves;
} TestCase;

// Function to swap two integers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fisher-Yates shuffle algorithm to generate random permutation
void shuffle(int *array, int n) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        swap(&array[i], &array[j]);
    }
}

// Generate unique random numbers
void generate_numbers(int *numbers) {
    // Initialize array with sequential numbers
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        numbers[i] = i - (NUMBERS_COUNT / 2);
    }
    // Shuffle the array
    shuffle(numbers, NUMBERS_COUNT);
}

// Count moves from push_swap output
int count_moves(const char *output) {
    int count = 0;
    const char *ptr = output;
    
    while (*ptr) {
        if (*ptr == '\n') count++;
        ptr++;
    }
    return count;
}

// Save failing test case to file
void save_failing_case(const TestCase *test, int test_number) {
    char filename[100];
    snprintf(filename, sizeof(filename), "failing_case_%d_%d_moves.txt", test_number, test->moves);
    
    FILE *file = fopen(filename, "w");
    if (!file) {
        perror("Failed to open file");
        return;
    }
    
    fprintf(file, "Number of moves: %d\n", test->moves);
    fprintf(file, "Numbers:");
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        fprintf(file, " %d", test->numbers[i]);
    }
    fprintf(file, "\n");
    
    fclose(file);
}

// Run push_swap and count moves
int test_push_swap(const int *numbers) {
    char command[BUFFER_SIZE] = "./push_swap";
    char number_str[16];
    FILE *fp;
    char output[BUFFER_SIZE];
    int total_moves = 0;
    
    // Create command string
    for (int i = 0; i < NUMBERS_COUNT; i++) {
        snprintf(number_str, sizeof(number_str), " %d", numbers[i]);
        strcat(command, number_str);
    }
    
    // Execute push_swap and capture output
    fp = popen(command, "r");
    if (fp == NULL) {
        printf("Failed to run push_swap\n");
        return -1;
    }
    
    // Count moves
    while (fgets(output, sizeof(output), fp) != NULL) {
        total_moves++;
    }
    
    pclose(fp);
    return total_moves;
}

int main() {
    TestCase current_test;
    int failing_cases = 0;
    int max_moves = 0;
    
    // Initialize random seed
    srand(time(NULL));
    
    printf("Starting push_swap testing...\n");
    
    for (int i = 0; i < TEST_CASES; i++) {
        // Generate test case
        generate_numbers(current_test.numbers);
        
        // Run test
        current_test.moves = test_push_swap(current_test.numbers);
        
        if (current_test.moves == -1) {
            printf("Test %d failed to execute\n", i + 1);
            continue;
        }
        
        // Update max moves
        if (current_test.moves > max_moves) {
            max_moves = current_test.moves;
        }
        
        // Print progress
        printf("\rTest %d/%d: %d moves", i + 1, TEST_CASES, current_test.moves);
        fflush(stdout);
        
        // Save failing cases
        if (current_test.moves > MAX_MOVES) {
            failing_cases++;
            printf("\nTest %d exceeded %d moves (%d moves)\n", 
                   i + 1, MAX_MOVES, current_test.moves);
            save_failing_case(&current_test, i + 1);
        }
    }
    
    // Print final summary
    printf("\n\nTesting completed!\n");
    printf("Total tests run: %d\n", TEST_CASES);
    printf("Number of cases exceeding %d moves: %d\n", MAX_MOVES, failing_cases);
    printf("Maximum moves seen: %d\n", max_moves);
    
    return 0;
}
