import copy # Needed for deepcopy if we were to use it, but shallow copy is fine for the honor roll step

# --- Task 1: Data Initialization and Basic Structure ---
initial_student_data = [
    ["S1001", "alice Wonderland", [80, 85, 88], 92],
    ["S1002", "bob The Builder", [70, 65, 75], 68], # Low attendance
    ["S1003", "charlie Brown", [92, 95, 88], 85],
    ["S1004", "diana Prince", [60, 55, 70], 75],
    ["S1005", "edward Scissorhands", [88, 90, 92], 95],
    ["S1006", "fiona Apple", [95, 98, 100], 65], # Low attendance
    ["S1007", "george Jetson", [75, 80, 70], 72],
    ["S1008", "hannah Montana", [98, 99, 97], 90],
    ["S1009", "irene Adler", [82, 85, 80], 88],
    ["S1010", "jack Sparrow", [50, 45, 60], 50], # Low attendance and scores
]
# Topic 1: List created, containing nested lists.

print("--- Initial Student Data (First 2 records for brevity) ---")
for i in range(min(2, len(initial_student_data))): # Topic 5: Looping
    print(initial_student_data[i]) # Topic 2: Accessing
print("-" * 30)

# --- Task 2: Process Initial Records (Calculate & Append Average Score) ---
# Topic 2: Accessing scores (e.g., student[2])
# Topic 3: Modifying lists by appending average_score (student.append(avg_score))
# Topic 5: Looping through initial_student_data
# Topic 7: Nested Lists - each student record is a list, scores is a nested list.

for student_record in initial_student_data:
    scores = student_record[2] # Accessing the list of scores
    if scores: # Check if scores list is not empty
        average_score = sum(scores) / len(scores)
    else:
        average_score = 0.0
    student_record.append(round(average_score, 2)) # Modifying by appending

print("--- Student Data After Average Calculation (First 2 records) ---")
for i in range(min(2, len(initial_student_data))):
    print(initial_student_data[i])
print("-" * 30)
# Expected format: [student_id, name, list_of_scores, attendance, average_score]

# --- Task 3: Filter Active Students and Standardize Names ---
# Topic 6: List Comprehension for filtering and transformation
# Topic 5: Looping (implicitly by comprehension)
# Topic 8: List Methods (specifically string method student[1].title())
# Topic 2: Accessing elements for condition (student[3]) and transformation (student[1])

active_students = [
    [student[0], student[1].title(), student[2], student[3], student[4]]
    for student in initial_student_data if student[3] >= 70
]

print("--- Active Students (Standardized Names, First 2 records) ---")
for i in range(min(2, len(active_students))):
    print(active_students[i])
print("-" * 30)

# --- Task 4: Identify Honor Roll Students ---
# Topic 8: List Methods (list.copy() for shallow copy, list.sort(key=..., reverse=True))
# Topic 4: Slicing (to get top 3: [:3])
# Topic 2: Accessing average_score (student[4]) for sorting and filtering

if active_students: # Proceed only if there are active students
    sorted_for_honor_roll = active_students.copy() # Shallow copy
    # Sort by average_score (index 4) in descending order
    sorted_for_honor_roll.sort(key=lambda student: student[4], reverse=True)

    honor_roll_candidates = [
        [student[0], student[1], student[4]] # id, name, avg_score
        for student in sorted_for_honor_roll if student[4] > 85
    ]
    honor_roll = honor_roll_candidates[:3] # Get top 3 or fewer if not enough candidates
else:
    honor_roll = []

print("--- Honor Roll ---")
if honor_roll:
    for student in honor_roll:
        print(student)
else:
    print("No students on the honor roll.")
print("-" * 30)

# --- Task 5: Calculate Overall Performance Statistics ---
# Topic 9: Generator Expression for efficient sum calculation
# Topic 5: Looping (implicitly by generator and for the perfect score count)
# Topic 2: Accessing original scores (student[2])

if active_students:
    # Generator for all individual scores of active students
    all_individual_scores_gen = (score for student in active_students for score in student[2])
    
    total_sum_individual_scores = 0
    total_count_individual_scores = 0
    
    # Manually consume generator to get sum and count
    for score in all_individual_scores_gen:
        total_sum_individual_scores += score
        total_count_individual_scores += 1
        
    if total_count_individual_scores > 0:
        overall_average_individual_score = total_sum_individual_scores / total_count_individual_scores
    else:
        overall_average_individual_score = 0.0

    # Count active students with at least one perfect score (100)
    perfect_score_students_count = 0
    for student in active_students: # Topic 5: Looping
        if 100 in student[2]: # Topic 2: Accessing scores, Topic 10: using 'in' for search
            perfect_score_students_count += 1
else:
    overall_average_individual_score = 0.0
    perfect_score_students_count = 0


print("--- Performance Statistics ---")
print(f"Overall Average of Individual Scores (Active Students): {overall_average_individual_score:.2f}")
print(f"Number of Active Students with at least one perfect score (100): {perfect_score_students_count}")
print("-" * 30)

# --- Task 6: Compile "Needs Improvement" List ---
# Topic 10: Problem Solving (identifying students based on criteria)
# Topic 6: List Comprehension (or Topic 5: Looping for selection)
# Topic 2: Accessing student_id, name, average_score
# Topic 8: List Methods (list.sort(key=...))

if active_students:
    needs_improvement_candidates = [
        [student[0], student[1], student[4]] # id, name, avg_score
        for student in active_students if student[4] < 60
    ]
    needs_improvement = needs_improvement_candidates
    # Sort by name (index 1)
    needs_improvement.sort(key=lambda student: student[1])
else:
    needs_improvement = []

print("--- Needs Improvement List (Average Score < 60) ---")
if needs_improvement:
    for student in needs_improvement:
        print(student)
else:
    print("No students in the 'Needs Improvement' category among active students.")
print("-" * 30)

print("\n--- Final Report Summary ---")
print("\nHonor Roll (Top students with average > 85):")
if honor_roll:
    for student_info in honor_roll:
        print(f"  ID: {student_info[0]}, Name: {student_info[1]}, Average: {student_info[2]}")
else:
    print("  None")

print(f"\nOverall Average of Individual Scores (Active Students): {overall_average_individual_score:.2f}")
print(f"Active Students with at least one perfect score: {perfect_score_students_count}")

print("\nNeeds Improvement (Active students with average < 60, sorted by name):")
if needs_improvement:
    for student_info in needs_improvement:
        print(f"  ID: {student_info[0]}, Name: {student_info[1]}, Average: {student_info[2]}")
else:
    print("  None")