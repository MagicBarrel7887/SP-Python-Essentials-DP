
from ast import Return
from pickle import APPEND, TRUE


def is_year_leap(year):
 is_year = False
 dis_4 = False
 dis_100 = False
 dis_400 = False
 
 if (year % 4) == 0:
     dis_4 = TRUE
     pass
 
 if (year % 100) == 0 :
     dis_100 = TRUE
     pass
 
 if (year % 400) == 0:
     dis_400 = TRUE
     pass
 
 print(int(bool(dis_4)), int(bool(dis_100)), int(bool(dis_400)))
    
 if dis_4 == TRUE and dis_100 == TRUE :
     if dis_400 != TRUE:
             is_year = True
     pass
 pass
 #
 # put your code here
 #
 
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
