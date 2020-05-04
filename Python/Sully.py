import os, sys

def write(f, number):
	code = "import os, sys%c%cdef write(f, number):%c%ccode = %c%s%c%c%cf.write(code %c (10, 10, 10, 9, 34, code, 34, 10, 9, 37, 10, 9, 34, 37, 34, 37, 10, 9, 10, 10, 10, 9, 34, 34, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 9, 34, 34, 10, 10, 34, 34, 10, 9))%c%cf.write(%cmain({0})%cc%c.format(number) %c (10))%c%cf.close()%c%cdef main(number):%c%cnumber = number + 1 if sys.argv[0] == %cSully.py%c else number%c%cwrite(open(%cSully_{0}.py%c.format(number - 1), %cw+%c), number - 1)%c%cif number > 1:%c%c%cos.system(%cpython Sully_{0}.py%c.format(number - 1))%c%cif __name__ == %c__main__%c:%c%c"
	f.write(code % (10, 10, 10, 9, 34, code, 34, 10, 9, 37, 10, 9, 34, 37, 34, 37, 10, 9, 10, 10, 10, 9, 34, 34, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 9, 34, 34, 10, 10, 34, 34, 10, 9))
	f.write("main({0})%c".format(number) % (10))
	f.close()

def main(number):
	number = number + 1 if sys.argv[0] == "Sully.py" else number
	write(open("Sully_{0}.py".format(number - 1), "w+"), number - 1)
	if number > 1:
		os.system("python Sully_{0}.py".format(number - 1))

if __name__ == "__main__":
	main(5)
