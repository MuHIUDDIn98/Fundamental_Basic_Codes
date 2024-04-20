empty_dict={}
empty_dict["name"] = "anik"
empty_dict["company"] = "get_aid"

for item in empty_dict.keys():
    print(empty_dict[item])
    
if empty_dict['name'] == 'anik':
    print("yes you are anik")


#deleting 
del empty_dict['company']

for item in empty_dict.keys():
    print(empty_dict[item])
    

person = {'f_name':'muhiuddin','L_name':'anik','age':23,'city':'Dhaka'}

for item in person.keys():
    print(person[item])