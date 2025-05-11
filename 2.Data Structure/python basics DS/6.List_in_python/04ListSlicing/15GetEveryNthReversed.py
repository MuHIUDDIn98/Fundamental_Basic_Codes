
# Problem: Create a function get_every_nth_reversed(data, n) 
# that returns a new list containing every nth element of data but in reverse order.
# E.g., get_every_nth_reversed([1,2,3,4,5,6,7,8,9,10], 3) should give [9,6,3].
# Solution:


def get_every_nth_reversed(data, n):
    if n <= 0:
        return []
    selected_elements = data[n-1::n]
    return selected_elements[::-1]

print(get_every_nth_reversed([1,2,3,4,5,6,7,8,9,10], 3)) # Output: [9, 6, 3]












# selected_elements = data[n-1::n]: This is the core logic for selecting the elements. It uses Python's list slicing feature. Let's break down the slice [n-1::n]:
# List slicing in Python has the general form list[start:stop:step].

# n-1: This is the start index. Since list indexing in Python starts from 0, the "Nth" element is actually at index n-1. For example, if n=3 (every 3rd element),
#  the first element we want is at index 3-1 = 2.

# The stop index is omitted. When omitted, the slice goes all the way to the end of the list.

# n: This is the step. It means that after picking the element at the start index, the slicer will jump n positions forward to pick the next element, and so on.
# So, data[n-1::n] creates a new list containing every Nth element from the original data list, starting from the Nth element.




# Now let's trace the example you provided:
# print(get_every_nth_reversed([1,2,3,4,5,6,7,8,9,10], 3))

# Function Call: get_every_nth_reversed is called with:

# data = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
# n = 3
# Inside the function:

# if n <= 0:: 3 <= 0 is False, so this block is skipped.

# selected_elements = data[n-1::n]:

# This becomes selected_elements = data[3-1::3], which simplifies to selected_elements = data[2::3].
# Let's see how data[2::3] works on [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]:
# Start at index 2: The element is 3.
# Step by 3: Next index is 2 + 3 = 5. The element is 6.
# Step by 3: Next index is 5 + 3 = 8. The element is 9.
# Step by 3: Next index is 8 + 3 = 11. This index is out of bounds for the list, so the slicing stops.
# So, selected_elements becomes [3, 6, 9].
# return selected_elements[::-1]:

# This becomes return [3, 6, 9][::-1].
# Reversing [3, 6, 9] gives [9, 6, 3].
# Output:

# The function returns [9, 6, 3].
# The print() statement then prints this list to the console.