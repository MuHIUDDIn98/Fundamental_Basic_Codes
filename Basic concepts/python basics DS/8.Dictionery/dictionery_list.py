my_list=[{"ip":"192.168.23.1"},{"ip":"192.168.23.2"},{"ip":"192.168.23.3"},{"ip":"192.168.23.4"}]

for element in my_list:
    print(element["ip"])



Marks = {'Physics':22,'Chemistry':54,'Maths':45}
print(Marks)
Marks['Physics'] = 76
Marks['Chemistry'] = 45
Marks["English"] = 86
print(Marks)

Marks_keys = Marks.keys()
Marks_keys = Marks.values()
print(Marks_keys)
# clear all valus Marks.clear()

Marks_items = Marks.items()
print(Marks_items)
