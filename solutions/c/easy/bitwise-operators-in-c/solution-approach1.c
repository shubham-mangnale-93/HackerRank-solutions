// ──────────────────────────────────────────────────
// Problem     Bitwise Operators
// Difficulty  Easy
// Subdomain   Conditionals and Loops
// Platform    HackerRank
// Language    c
// Status      Accepted
// Submitted   2026-06-28, 08:28 p.m.
// ──────────────────────────────────────────────────

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k)
{
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for(int a = 1; a <= n; a++)
    {
        for(int b = a + 1; b <= n; b++)
        {
            int and = a & b;
            int or = a | b;
            int xor = a ^ b;

            if(and < k && and > max_and)
            {
                max_and = and;
            }

            if(or < k && or > max_or)
            {
                max_or = or;
            }

            if(xor < k && xor > max_xor)
            {
                max_xor = xor;
            }
        }
    }

    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);

    return 0;
}
