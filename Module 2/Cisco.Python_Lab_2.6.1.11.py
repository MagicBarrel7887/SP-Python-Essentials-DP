hour = int(input("Starting time (hours): "))
mins = int(input("Starting time (minutes): "))
dura = int(input("Event duration (minutes): "))


time_hour = (hour + dura//60 + (mins+ dura%60)//60)%24

mins = (mins + dura ) & 60

mins = mins & 60

# Write your code here.
print(time_hour, mins, sep=":")
