// Write Your Name Here

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define MAX_LINE_LENGTH 100
#define MAX_NUMBERS 1000

int main() {
    FILE *fp;
    char line[MAX_LINE_LENGTH];
    unsigned long long numbers[MAX_NUMBERS];
    int count = 0;

    fp = fopen("330-final.txt", "r");

    if (fp == NULL) {
        perror("Error opening file");
        return 1;
    }


    // Write Your Code Here


    // Calculate mean


    // Calculate median
    

    // Calculate range
    

    // Calculate standard deviation
    

    // Calculate passing ratio
    

    // Print results
    printf("\nStatistics:\n");
    printf("Mean: %.2f\n", mean);
    printf("Median: %.2f\n", median);
    printf("Range: %llu\n", range);
    printf("Standard Deviation: %.2f\n", std_dev);
    printf("Passing Ratio: %.2f\n", passing_ratio);

    return 0;
}
