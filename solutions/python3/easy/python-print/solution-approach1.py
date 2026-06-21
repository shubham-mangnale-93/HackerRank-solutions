# ──────────────────────────────────────────────────
# Problem     Print Function
# Difficulty  Easy
# Subdomain   Introduction
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-06-21, 10:18 p.m.
# ──────────────────────────────────────────────────

if __name__ == '__main__':
    n = int(input())
      
    # Print numbers from 1 to n consecutively without spaces
    for i in range(1, n + 1):
        print(i, end="")
