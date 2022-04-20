try: 
	first_prompt = input("ent 1 ")
	a = len(first_prompt)
	second_prompt = input("ent 2 ")
	b = len(second_prompt) * 2
	print(a/b)
except ZeroDivisionError:
	print("err divide zero!")
except ValueError:
	print("err val")
except:
	print("Error.Error.Error")