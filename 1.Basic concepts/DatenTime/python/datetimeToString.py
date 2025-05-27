from datetime import datetime

now = datetime.now()
formatted_date = now.strftime("%A, %B %d, %Y %I:%M %p")
print(f"Formatted date: {formatted_date}")