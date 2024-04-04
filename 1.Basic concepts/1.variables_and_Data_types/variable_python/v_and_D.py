s = "abcdefgh"
for i in s:
    print(i,end=" ")

print()
for i in range(len(s)):
    print(i, end=" ")
print()

for i in range(len(s)):
    print(i, end=" ")
    print(s[i],end =" ")
    

print()

for i,val in enumerate(s):
    print(f'index :{i} val:{val}')