# ──────────────────────────────────────────────────
# Problem     Nested Lists
# Difficulty  Easy
# Subdomain   Basic Data Types
# Platform    HackerRank
# Language    python3
# Status      Accepted
# Submitted   2026-06-30, 10:43 p.m.
# ──────────────────────────────────────────────────

if __name__ == '__main__':
    # Initialize the list correctly inside the block
    students = []
    
    # Read total number of students
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append([name, score])
        
    # Extract unique scores, sort them, and select the second element
    unique_scores = sorted(list(set([student[1] for student in students])))
    second_lowest = unique_scores[1]
    
    # Filter names matching the second lowest score
    second_lowest_students = [student[0] for student in students if student[1] == second_lowest]
    
    # Sort names alphabetically and print
    for name in sorted(second_lowest_students):
        print(name)
