# Problem:
# You have a list of strings text_data = ["line1 data", "line2 important", "line3", "line4 critical"].
# Iterate through it. For each string, check if it contains "important" or "critical". 
# If it does, add its index to a new list called alert_indices.
# Solution:

text_data = ["line1 data", "line2 important", "line3", "line4 critical", "line5 important"]
alert_indices = []
for index, line in enumerate(text_data):
    if "important" in line or "critical" in line:
        alert_indices.append(index)
print(f"Alert indices: {alert_indices}") # Output: Alert indices: [1, 3, 4]