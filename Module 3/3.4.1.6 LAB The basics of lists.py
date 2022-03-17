# This is an existing list of numbers hidden in the hat.
import numbers


hat_list = [1, 2, 3, 4, 5]

# Step 1: write a line of code that prompts the user
# to replace the middle number with an integer number entered by the user.
number = int(input("input(prompt) = number "))

hat_list.insert(3, number)

print(hat_list, end="\n")

hat_list.pop(2)

print(hat_list , end="\n")

# Step 2: write a line of code that removes the last element from the list.
hat_list.pop(4)

print(hat_list, end="\n")
# Step 3: write a line of code that prints the length of the existing list.

print("list length : ",len(hat_list) , end="\n")

print(hat_list , end="\n")
