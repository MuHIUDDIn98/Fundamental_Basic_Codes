from datetime import datetime, timedelta

now = datetime.now()
one_week_later = now + timedelta(weeks=1)
three_days_ago = now - timedelta(days=3)

print(f"One week from now: {one_week_later}")
print(f"Three days ago: {three_days_ago}")