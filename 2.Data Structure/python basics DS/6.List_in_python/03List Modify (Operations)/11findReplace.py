settings = ["low", "medium", "high"]
try:
    index_medium = settings.index("medium")
    settings[index_medium] = "standard"
except ValueError:
    print("'medium' not found in settings.")
print(settings) # Output: ['low', 'standard', 'high']