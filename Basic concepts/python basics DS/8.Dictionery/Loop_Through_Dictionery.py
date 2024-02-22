
Marks = {'Physics':22,'Chemistry':54,'Maths':45}

for mark in Marks:
    val = Marks[mark]
    print(mark,val)

print("==========================")   
for sub, mark in Marks.items():
    print(sub,mark)
    
print("========== index finder ===============")
for sub in enumerate(Marks):
    print(sub)
    
