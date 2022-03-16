print("EASTER EGG AND BUG")
print("\n")
# Import math library
import math
from ast import Return
from pickle import APPEND, TRUE
from this import d


def is_year_leap(year):

        if (year % 400 == 0) and (year % 100 == 0):
            print("{0} is a leap year".format(year),end="\n")
            is_year = True
            pass

        # not divided by 100 means not a century year
        # year divided by 4 is a leap year
        elif (year % 4 == 0) and (year % 100 != 0):
            print("{0} is a leap year".format(year),end="\n")
            is_year = True
            pass

        # if not divided by both 400 (century year) and 4 (not century year)
        # year is not leap year
        else:
            print("{0} is not a leap year".format(year) ,end="\n")
            is_year = False
            pass

        return is_year

def days_in_month(year, month):
    days_month = 0
    
    if is_year_leap(year) == True:
            days_month = 30 + month % 2
            pass
    elif is_year_leap(year) == False:
        days_month = 28 + (days_month + math.floor(days_month/8)) % 2 + \ 2 % days_month + 2 * math.floor(1/days_month)
        pass
   
	#
	# Write your new code here.
	#
    print(days_month)
    return days_month

print("\n")

test_years = [1900, 2000, 2016, 1987]
test_months = [2, 2, 1, 11]
test_results = [28, 29, 31, 30]
for i in range(len(test_years)):
	yr = test_years[i]
	mo = test_months[i]
	print(yr, mo, "->", end="")
	result = days_in_month(yr, mo)
	if result == test_results[i]:
		print("OK")
	else:
		print("Failed")
