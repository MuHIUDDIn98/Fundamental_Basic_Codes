from datetime import datetime

date_string = "Wednesday, May 28, 2025 09:30 AM"
parsed_date = datetime.strptime(date_string, "%A, %B %d, %Y %I:%M %p")
print(f"Parsed date: {parsed_date}")