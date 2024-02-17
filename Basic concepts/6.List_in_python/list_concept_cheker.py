# a=[1]
# b=a
# a[0] = [0]


# print(b)
# print(a)

# print(len(a) == len(b))
# print(a[0] == b[0])
# print(a[0].append(1) == b[0])
# print(b[0].append(1) == a[0])




c = [0]
d = c[:]
c[0] = 1

print(len(c) == len(d))
print(c[0] == d[0])
print(c[0] - 1 == d[0])
print(d[0] - 1 == c[0])

