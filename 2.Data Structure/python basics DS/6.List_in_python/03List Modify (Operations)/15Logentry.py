log=["entry1","entry2","entry3","entry4"]
timestap="2025-05-10 :"

for i in range(len(log)):
    log[i] = timestap + log[i]
    print(i)


print(log)