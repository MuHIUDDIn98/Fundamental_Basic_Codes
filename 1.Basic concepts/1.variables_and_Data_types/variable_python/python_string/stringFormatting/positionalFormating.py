# You can reuse arguments by referencing their index
sentence = "The quick {0} fox jumps over the lazy {1}. The {1} was sleeping.".format("brown", "dog")
print(sentence)
# Output: The quick brown fox jumps over the lazy dog. The dog was sleeping.

# Order in format() matters
sentence_wrong = "The quick {1} fox jumps over the lazy {0}.".format("brown", "dog")
print(sentence_wrong)
# Output: The quick dog fox jumps over the lazy brown.