spath = input("Sample input: ")
Spathiphyllum = "Spathiphyllum"
spathiphyllum = "spathiphyllum"

# prints the sentence "Yes - Spathiphyllum is the best plant ever!" to the screen if the inputted string is "Spathiphyllum" (upper-case)
# prints "No, I want a big Spathiphyllum!" if the inputted string is "spathiphyllum" (lower-case)
# prints "Spathiphyllum! Not [input]!" otherwise. Note: [input] is the string taken as input.

if spath == Spathiphyllum:
    print("Yes - Spathiphyllum is the best plant ever!")
    pass
elif spath == spathiphyllum:
    print("No, I want a big Spathiphyllum!")
    pass
else:
    print("Spathiphyllum! Not ", spath)
    pass

