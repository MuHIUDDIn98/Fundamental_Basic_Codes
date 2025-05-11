# Problem: schedule = ["Morning", "Noon", "Evening", "Night"]. 
# Use slice assignment to replace "Noon" and "Evening" with just "Afternoon".
#  Solution:
schedule = ["Morning", "Noon", "Evening", "Night"]
schedule[1:3] = ["Afternoon"]
print(schedule) # Output: ['Morning', 'Afternoon', 'Night']