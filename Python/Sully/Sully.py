import os

if __name__ == "__main__":
	i = 5
	i -= 0 if __file__ == "Sully.py" else 1
	if i < 0:
		exit()
	code = 'import os%c%cif __name__ == "__main__":%c	i = %d%c	i -= 0 if __file__ == "Sully.py" else 1%c	if i < 0:%c		exit()%c	code = %c%s%c%c	try:%c		with open(f"Sully_%ci%c.py", "w") as f:%c			f.write(code %% (10, 10, 10, i, 10, 10, 10, 10, 39, code, 39, 10, 10, 123, 125, 10, 10, 123, 125, 10, 10, 10))%c		os.system(f"python3 Sully_%ci%c.py")%c	except:%c		pass%c'
	try:
		with open(f"Sully_{i}.py", "w") as f:
			f.write(code % (10, 10, 10, i, 10, 10, 10, 10, 39, code, 39, 10, 10, 123, 125, 10, 10, 123, 125, 10, 10, 10))
		os.system(f"python3 Sully_{i}.py")
	except:
		pass
