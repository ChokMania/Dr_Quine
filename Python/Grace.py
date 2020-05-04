# Define defines
USELESS = "I am useless"
CODE = "# Define defines%cUSELESS = %c%s%c%cCODE = %c%s%c%cMAIN = lambda f : f.write(CODE %c (10, 34, USELESS, 34, 10, 34, CODE, 34, 10, 37, 10, 10, 34, 34, 34, 34, 10))%c%cMAIN(open(%cGrace_kid.py%c, %cw+%c))%c"
MAIN = lambda f : f.write(CODE % (10, 34, USELESS, 34, 10, 34, CODE, 34, 10, 37, 10, 10, 34, 34, 34, 34, 10))

MAIN(open("Grace_kid.py", "w+"))
