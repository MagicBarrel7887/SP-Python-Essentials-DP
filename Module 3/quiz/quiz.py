from cgi import test


my_list = [3,1,-1]
my_list[-1] = my_list[-2]
print(my_list)

vals = [0,1,2]
vals[0], vals[1] = vals[1], vals[2]
print(vals)

nums = []
a = nums
a.append(1)
print(a)

test_list = [0,1,2,3]
x = 1
for elem in test_list:
    x*=elem
print(x)

i =2
while i >= 0:
    print("*")
    i -=2

for n in range(-1,1):
    print("#")
    
z = 10
y = 0
h = z >y or z == y
print(h)