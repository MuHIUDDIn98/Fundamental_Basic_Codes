phone_number = open("number.txt", "r")
password = open("password.txt", "r")
get_phone_number = phone_number.read()
get_password = password.read()
phone_number_list = get_phone_number.split()
password_list = get_password.split()
def send_phone_and_password(phone_number, password):
    print(f"phone_number: {phone_number}, password: {password}")
for phone_number in phone_number_list:
    phone = phone_number
    index_of_phone_number = phone_number_list.index(phone_number)
    passwd = password_list[index_of_phone_number]
    send_phone_and_password(phone_number=phone_number, password=passwd)