
from ast import Return
from pickle import APPEND, TRUE


def is_year_leap(year):

        if (year % 400 == 0) and (year % 100 == 0):
            print("{0} is a leap year".format(year))
            is_year = True
            pass

        # not divided by 100 means not a century year
        # year divided by 4 is a leap year
        elif (year % 4 == 0) and (year % 100 != 0):
            print("{0} is a leap year".format(year))
            is_year = True
            pass

        # if not divided by both 400 (century year) and 4 (not century year)
        # year is not leap year
        else:
            print("{0} is not a leap year".format(year))
            is_year = False
            pass
        
        return is_year



test_data = [1900, 2000, 2016, 1987]

test_results = [False, True, True, False]
for i in range(len(test_data)):
	yr = test_data[i]
	print(yr, "->", end="")
	result = is_year_leap(yr)
	if result == test_results[i]:
		print("OK")
	else:
		print("Failed")
