// ──────────────────────────────────────────────────
// Problem     Sum of Digits of a Five Digit Number
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-06-21, 10:15 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

 int main() {
    
    int n;
    int sum = 0; // Declared and initialized sum to 0
    scanf("%d", &n);
    
    // Extract each digit using loop and modulo operator
    while (n > 0) {
        sum += n % 10; // Add the last digit to sum
        n = n / 10;    // Remove the last digit from n
    }
    
    // Print the final sum
    printf("%d\n", sum);
    
    return 0;
}
