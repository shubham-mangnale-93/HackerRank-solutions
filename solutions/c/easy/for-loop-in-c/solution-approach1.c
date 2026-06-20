// ──────────────────────────────────────────────────
// Problem     For Loop in C
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-06-20, 11:21 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
 // Array of string representations for indices 1 to 9
    char *words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Loop through the interval from 'a' to 'b' inclusive
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // Print lowercase English word for numbers 1 through 9
            printf("%s\n", words[i]);
        } else if (i > 9) {
            // Check parity for numbers greater than 9
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }
    return 0;
}

