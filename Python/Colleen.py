# Print function

def print_f(s):
	print(s % (10, 10, 10, 9, 37, 10, 10, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 10, 34, 34, 10, 9))

def main():
	# Main function
	s = "# Print function%c%cdef print_f(s):%c%cprint(s %c (10, 10, 10, 9, 37, 10, 10, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 10, 34, 34, 10, 9))%c%cdef main():%c%c# Main function%c%cs = %c%s%c%c%cprint_f(s)%c%cif __name__ == %c__main__%c:%c%cmain()"
	print_f(s)

if __name__ == "__main__":
	main()
