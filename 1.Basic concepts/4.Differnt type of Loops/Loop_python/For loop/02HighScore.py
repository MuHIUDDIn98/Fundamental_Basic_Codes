import random

# A large list of simulated student scores (100 scores between 40 and 99)
student_scores = [random.randint(40, 99) for _ in range(100)]

# Print the generated list (optional)
# print(student_scores)
print(f"Number of scores generated: {len(student_scores)}")
print("-" * 30) # Separator

# --- Method 1: Manual Loop ---

# Initialize min and max scores
# We need to handle the case of an empty list
if not student_scores:
    manual_min_score = None # Or some indicator of no result
    manual_max_score = None
    print("Manual Loop: The list is empty.")
else:
    # Initialize with the first score
    manual_min_score = student_scores[0]
    manual_max_score = student_scores[0]

    # Iterate through the rest of the scores (or all, first comparison is just redundant)
    for score in student_scores: # Can start from student_scores[1:] if preferred
        # Check for higher score
        if score > manual_max_score:
            manual_max_score = score
        # Check for lower score
        if score < manual_min_score:
            manual_min_score = score

    print(f"The lowest score (manual loop) is: {manual_min_score}")
    print(f"The highest score (manual loop) is: {manual_max_score}")

print("-" * 30) # Separator

# --- Method 2: Using Built-in min() and max() Functions ---

if not student_scores:
    print("Built-in Functions: The list is empty.")
else:
    # Use the built-in min() and max() functions
    builtin_min_score = min(student_scores)
    builtin_max_score = max(student_scores)

    print(f"The lowest score (using min() function) is: {builtin_min_score}")
    print(f"The highest score (using max() function) is: {builtin_max_score}")

print("-" * 30) # Separator

