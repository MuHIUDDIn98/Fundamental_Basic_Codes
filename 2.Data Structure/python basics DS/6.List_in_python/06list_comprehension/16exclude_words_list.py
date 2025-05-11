sentence = "The quick brown fox jumps over the lazy dog"
words_in_sentence = sentence.split()
print(words_in_sentence)
excluded_words = {"the", "a", "is", "over"}
filtered_words = [
    word for word in words_in_sentence
    if word.lower() not in excluded_words
]
print(filtered_words) # Output: ['quick', 'brown', 'fox', 'jumps', 'lazy', 'dog']