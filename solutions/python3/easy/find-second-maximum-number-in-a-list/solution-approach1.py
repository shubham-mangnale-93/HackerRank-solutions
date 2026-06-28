# ──────────────────────────────────────────────────
# Problem     Find the Runner-Up Score!  
# Difficulty  Easy
# Subdomain   Basic Data Types
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-06-28, 08:25 p.m.
# ──────────────────────────────────────────────────

if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(set(arr))     
    arr.sort()                
    print(arr[-2])            
    
