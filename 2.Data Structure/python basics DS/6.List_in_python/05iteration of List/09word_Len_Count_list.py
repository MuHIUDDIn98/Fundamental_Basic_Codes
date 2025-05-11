# Problem: words = ["hello", "world", "python", "programming"].
# Create a new list word_lengths containing the length of each word.
# Solution:

words = ["hello", "world", "python", "programming"]
w_length_list=[]
for w in words:
    w_length_list.append(len(w))


print(w_length_list)