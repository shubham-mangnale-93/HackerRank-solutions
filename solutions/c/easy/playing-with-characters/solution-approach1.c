// ──────────────────────────────────────────────────
// Problem     Playing With Characters
// Difficulty  Easy
// Subdomain   Introduction
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-06-17, 03:07 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    char ch;
    char s[100];
    char sen[100];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf(" %[^\n]", sen);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
 
    return 0;
}
