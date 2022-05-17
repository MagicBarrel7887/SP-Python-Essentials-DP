


tem_c0 = int(input("enter data : "))
print("\n")
c0 = tem_c0
steps = 0
while True:
    
    if c0 % 2 == 0:
        c0 = c0 // 2
    else:
        c0 = 3 * c0 + 1
    pass
    print(c0)
    steps = steps + 1
    if c0 == 1:
        break
    pass
   
print("steps = ", steps)
    

