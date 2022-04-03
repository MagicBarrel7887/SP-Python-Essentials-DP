from re import T


my_list = [1, 2, 4, 4, 1, 4, 2, 6, 2, 9]
temp_list = my_list



print(temp_list)

for i in temp_list:
    number = temp_list[i]
    if number == temp_list[i]:
        temp_list.remove(temp_list[i])
        pass
    pass

#
# Write your code here.
#
print("The list with unique elements only:")
print(my_list)
