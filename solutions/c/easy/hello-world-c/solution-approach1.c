// ──────────────────────────────────────────────────
// Problem     "Hello World!" in C
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-06-04, 12:50 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    
    char s[100];
    scanf("%[^\n]%*c", &s); 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    printf("Hello, World!\n%s",s);
     
    return 0;
}
