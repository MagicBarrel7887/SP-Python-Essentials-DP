from math import sqrt
 


def is_prime(num):
# Corner case
 if (num <= 1):
  return False
 
    # Check from 2 to sqrt(n)
 for i in range(2, int(sqrt(num))+1):
  if (num % i == 0):

    return False

 return True


for i in range(1, 20):
	if is_prime(i + 1):
			print(i + 1, end=" ")
print()

data = [2, 3, 5, 7, 11, 13, 17, 19]