# Problem
# (Conditional Transformation with Filtering):
# scores = [85, 92, 78, 60, 95, 70, 65].
# Create a list of "Pass" or "Needs Improvement" strings,
# but only for scores greater than or equal to 70.
#  "Pass" if score >= 80, "Needs Improvement" if 70 <= score < 80.
# Solution:

scores = [85, 92, 78, 60, 95, 70, 65]
remarks = [
    "Pass" if score >= 80 else "Needs Improvement"
    for score in scores if score >= 70
]
print(remarks) # Output: ['Pass', 'Pass', 'Needs Improvement', 'Pass', 'Needs Improvement']