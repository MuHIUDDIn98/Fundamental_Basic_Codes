from datetime import datetime, date, time

my_date = date(2025, 5, 10)
my_time = time(18, 45, 0)
combined_datetime = datetime.combine(my_date, my_time)
print(f"Combined datetime: {combined_datetime}")