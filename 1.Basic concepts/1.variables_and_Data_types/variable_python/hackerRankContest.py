
# # Enter two numbers separated by space: brightness threshold
# L = input("Enter brightness and threshold separated by space: ")
# print(L)
# parts = L.split()
# print(parts)
# brightness = float(parts[0])
# threshold = float(parts[1])
# print(brightness, threshold)
# if brightness >= threshold:
#     print("ON")
# else:
#     print("OFF")


# str = input()
# values = str.split()
# x = float(values[0])
# min_v = float(values[1])
# max_v = float(values[2])

# norm = (x - min_v) / (max_v - min_v)
# print(f"{norm:.2f}")


# N = int(input())
# target = float(input())
# total_loss = 0.0
# for i in range(N):
#     loss = float(input())
#     total_loss = total_loss + loss
# average_loss = total_loss / N
# if average_loss <= target:
#     print("PASS")
# else:
#     print("RETRY")

N = int(input())

yes_count = 0
no_count = 0

for _ in range(N):
    user_input = input()
    if user_input == 'YES':
        yes_count+=1
    elif user_input == 'NO':
        no_count+=1
        
if yes_count>=no_count:
    print("ACCPET")
elif no_count>yes_count:
    print("REJECT")
    
    
#  https://www.hackerrank.com/contests/python-for-machine-learninga-module-2-5-a-practice-day-1/challenges