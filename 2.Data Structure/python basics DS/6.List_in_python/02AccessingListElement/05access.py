#Problem: 
# complex_data = [ "ID01", ("DataCo", [2023, 2024, 2025]), {"status": "active"} ].
#  Access and print the year 2024. Solution:
complex_data = [
     "ID01",
     ("DataCo", [2023, 2024, 2025]),
     {"status": "active"} 
     ]

print(complex_data[1][1][1])