from datetime import time

my_time = time(14, 30, 15)
print(type(my_time))
print(f"A specific time: {my_time}")
print(f"Hour: {my_time.hour}")
print(f"Minute: {my_time.minute}")
print(f"Second: {my_time.second}")