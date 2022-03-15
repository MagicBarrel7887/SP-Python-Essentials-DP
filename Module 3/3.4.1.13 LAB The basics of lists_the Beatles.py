# step 1

beatles = []
alt_members = ["Stu Sutcliffe", "Pete Best"]
print("Step 1:", beatles)

# step 2
beatles.append("John Lennon")
beatles.append("Paul McCartney")
beatles.append("George Harrison")

print("Step 2:", beatles)

# step 3
for item in range(len(alt_members)):
    beatles.append(alt_members[item])
 
print("Step 3:", beatles)

# step 4
beatles.remove("Stu Sutcliffe")
beatles.remove("Pete Best")

print("Step 4:", beatles)

# step 5
beatles.insert( 0,"Ringo Starr")
print("Step 5:", beatles)


# testing list legth
print("The Fab", len(beatles))
