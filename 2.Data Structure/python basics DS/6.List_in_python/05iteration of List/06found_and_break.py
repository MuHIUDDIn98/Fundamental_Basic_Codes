# Problem: data_points = [1, 2, 0, 3, 4, 0, 5].
# Iterate through the list. 
# If you encounter a 0, print "Zero found" and use break to exit the loop.
# Solution:

data_points = [1, 2, 0, 3, 4, 0, 5]
for point in data_points:
    print(f"Checking: {point}")
    if point == 0:
        print("Zero found")
        break