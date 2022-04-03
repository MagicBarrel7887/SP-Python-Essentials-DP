from re import T


my_list = [1, 2, 4, 4, 1, 4, 2, 6, 2, 9]
temp_list = my_list



print(temp_list)

for i in temp_list:
    tem_int = temp_list[i]
    for j in temp_list:
        if tem_int == temp_list[1- j]:
            print(tem_int,temp_list[j] ,sep=" : ")
            temp_list.pop(1-j)
            pass
        pass
    pass
print(temp_list)
#
# Write your code here.
#
print("The list with unique elements only:")
print(my_list)
