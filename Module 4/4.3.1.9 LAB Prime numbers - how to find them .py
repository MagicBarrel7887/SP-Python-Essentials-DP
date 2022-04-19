
def is_prime(num):
#
# Write your code here.
#
  if num / 2:
	  print("true")
	  return True

for i in range(1, 20):
	if is_prime(i + 1):
			print(i + 1, end=" ")
print()

data = [2, 3, 5, 7, 11, 13, 17, 19]