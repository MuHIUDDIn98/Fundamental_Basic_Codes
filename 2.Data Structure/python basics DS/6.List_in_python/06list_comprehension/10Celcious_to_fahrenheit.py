temps_celsius = [0, 10, 20, 30, -5]
temps_fahrenheit = [(c * 9/5) + 32 for c in temps_celsius]
print(temps_fahrenheit) # Output: [32.0, 50.0, 68.0, 86.0, 23.0]