def get_element_safely(data_list, index):
    try:
        return data_list[index]
    except IndexError:
        return None

my_items = [10, 20, 30]
print(get_element_safely(my_items, 1))  # Output: 20
print(get_element_safely(my_items, 5))  # Output: None