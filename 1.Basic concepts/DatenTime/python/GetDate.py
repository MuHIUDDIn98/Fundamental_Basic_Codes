from datetime import date

today = date.today()
print(type(today))
print(f"Today's date is: {today}")
print(f"Year: {today.year}")
print(f"Month: {today.month}")
print(f"Day: {today.day}")