import math
from ast import Return
from pickle import APPEND, TRUE
from this import d

import calendar
from datetime import date


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
#
# Your code from LAB 4.3.1.7.
#

 print(calendar.monthrange(year,month)[1])
 days_month = calendar.monthrange(year,month)[1]
	#
	# Write your new code here.
	#
 print(days_month)
 return days_month

def day_of_year(year, month, day):
    date_val = date(2007, 7, 23)
 
    year_month_day = date_val.toordinal() - date(date_val.year, 1, 1).toordinal() + 1
 
    print("\nDay of year: ", year_month_day, "\n")
    return year_month_day

print("\n")
print("\n")
print("\n")

print(day_of_year(2000, 12, 31))
