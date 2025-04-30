# --- Initial Strings ---
s1 = "anik"
s2 = 'aAnIk'
s3 = """  this is also a string with spaces  """
s_numeric = "12345"
s_alnum = "Anik123"
s_identifier = "my_variable"
s_title = "This Is A Title"

print("--- Case Conversion ---")
print(f"Original s1: '{s1}'")
print(f"s1.capitalize(): '{s1.capitalize()}'") # First char uppercase, rest lowercase
print(f"s1.upper(): '{s1.upper()}'")           # All uppercase
print(f"s2.lower(): '{s2.lower()}'")           # All lowercase
print(f"s2.swapcase(): '{s2.swapcase()}'")     # Swaps case (lower to upper, upper to lower)
print(f"s1.title(): '{s1.title()}'")           # First char of each word uppercase
print(f"s_title.istitle(): {s_title.istitle()}") # Checks if string is title-cased

# casefold() is similar to lower() but more aggressive for unicode comparisons
s_german = "Straße"
print(f"'{s_german}'.lower(): '{s_german.lower()}'")
print(f"'{s_german}'.casefold(): '{s_german.casefold()}'") # Often used for case-insensitive matching


print("\n--- Searching and Finding ---")
print(f"Original s3: '{s3}'")
print(f"s3.count('s'): {s3.count('s')}")             # Counts non-overlapping occurrences
print(f"s3.find('is'): {s3.find('is')}")             # Finds first occurrence index (returns -1 if not found)
print(f"s3.find('xyz'): {s3.find('xyz')}")           # Example: not found
print(f"s3.rfind('is'): {s3.rfind('is')}")           # Finds last occurrence index (returns -1 if not found)
# index() is similar to find() but raises ValueError if not found
print(f"s3.index('is'): {s3.index('is')}")
# print(f"s3.index('xyz'): {s3.index('xyz')}") # This would cause a ValueError

print(f"s3.strip().startswith('this'): {s3.strip().startswith('this')}") # Checks if string starts with prefix (used strip() first)
print(f"s3.strip().endswith('spaces'): {s3.strip().endswith('spaces')}")   # Checks if string ends with suffix


print("\n--- Checking and Validation ---")
print(f"s1 ('{s1}').isalpha(): {s1.isalpha()}")         # All chars are alphabetic?
print(f"s_numeric ('{s_numeric}').isnumeric(): {s_numeric.isnumeric()}") # All chars are numeric (0-9)?
print(f"s_numeric ('{s_numeric}').isdigit(): {s_numeric.isdigit()}")   # All chars are digits (0-9)?
print(f"s_numeric ('{s_numeric}').isdecimal(): {s_numeric.isdecimal()}") # All chars are decimal chars? (excludes some unicode numeric chars)
print(f"s_alnum ('{s_alnum}').isalnum(): {s_alnum.isalnum()}")     # All chars are alphanumeric (letters or numbers)?
print(f"'   '.isspace(): {'   '.isspace()}")             # All chars are whitespace?
print(f"s1.islower(): {s1.islower()}")                   # All cased chars are lowercase?
print(f"'ANIK'.isupper(): {'ANIK'.isupper()}")           # All cased chars are uppercase?
print(f"s_identifier ('{s_identifier}').isidentifier(): {s_identifier.isidentifier()}") # Is it a valid Python identifier?
print(f"'Hello\\nWorld'.isprintable(): {'Hello\\nWorld'.isprintable()}") # All chars printable (excludes \n, \t etc.)?
print(f"'Hello World'.isprintable(): {'Hello World'.isprintable()}")
print(f"s2 ('{s2}').isascii(): {s2.isascii()}")         # All chars are ASCII?


print("\n--- Modification and Splitting ---")
print(f"Original s3: '{s3}'")
print(f"s3.replace('is', 'XX'): '{s3.replace('is', 'XX')}'") # Replaces all occurrences
print(f"s3.replace('s', 'S', 2): '{s3.replace('s', 'S', 2)}'") # Replaces only the first 2 occurrences

# Removing whitespace
print(f"s3.strip(): '{s3.strip()}'")     # Removes leading/trailing whitespace
print(f"s3.lstrip(): '{s3.lstrip()}'")    # Removes leading whitespace
print(f"s3.rstrip(): '{s3.rstrip()}'")    # Removes trailing whitespace
s_special = "!!!hello!!!"
print(f"'{s_special}'.strip('!'): '{s_special.strip('!')}'") # Can strip specific chars

# Splitting
words = s3.strip().split(' ') # Splits string into a list based on delimiter (default is whitespace)
print(f"s3.strip().split(' '): {words}")
lines = "first line\nsecond line\nthird line".splitlines() # Splits string at line breaks
print(f"'...'.splitlines(): {lines}")

# Joining (opposite of split) - joins elements of an iterable with the string as a separator
separator = '-'
joined_string = separator.join(['a', 'b', 'c'])
print(f"'-'.join(['a', 'b', 'c']): '{joined_string}'")
print(f"' '.join(words): '{' '.join(words)}'") # Joining the 'words' list back

# Partitioning
print(f"s3.partition('is'): {s3.partition('is')}") # Splits into 3 parts: before, separator, after (first occurrence)
print(f"s3.rpartition('is'): {s3.rpartition('is')}")# Splits into 3 parts: before, separator, after (last occurrence)

print("\n--- Padding and Alignment ---")
print(f"s1 ('{s1}')")
width = 10
print(f"s1.center({width}, '-'): '{s1.center(width, '-')}'") # Center aligns, pads with '-'
print(f"s1.ljust({width}, '*'): '{s1.ljust(width, '*')}'")   # Left aligns, pads with '*'
print(f"s1.rjust({width}, ' '): '{s1.rjust(width, ' ')}'")   # Right aligns, pads with space (default)
s_num_str = "42"
print(f"s_num_str ('{s_num_str}').zfill(5): '{s_num_str.zfill(5)}'") # Pads with leading zeros (useful for numbers)


print("\n--- Formatting ---")
template = "Hello, {}. You are {} years old."
formatted_str = template.format("Anik", 30)
print(f"template.format('Anik', 30): '{formatted_str}'")

template_named = "Hello, {name}. Your score is {score}."
formatted_named = template_named.format(name="Bob", score=95)
print(f"template_named.format(name='Bob', score=95): '{formatted_named}'")

# f-strings (more modern way, shown in your original code)
name = "Charlie"
age = 25
print(f"f-string: Hello, {name}. You are {age} years old.")

# format_map requires a dictionary-like object
data = {'name': 'David', 'city': 'Dhaka'}
print("Hello, {name} from {city}.".format_map(data))


print("\n--- Translation ---")
# Create a translation table: 'a' -> 'X', 'n' -> 'Y', delete 'k'
trans_table = str.maketrans("an", "XY", "k")
print(f"s1 ('{s1}')")
print(f"s1.translate(trans_table): '{s1.translate(trans_table)}'")


