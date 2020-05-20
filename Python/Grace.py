# Define defines
FT = exec
CODE = "# Define defines%cFT = exec%cCODE = %c%s%c%cMAIN = %cf = open(%cGrace_kid.py%c, %cw+%c);f.write(CODE %c (10, 10, 34, CODE, 34, 10, 39, 34, 34, 34, 34, 37, 39, 10, 10, 10));f.close();%c%c%cFT(MAIN)%c"
MAIN = 'f = open("Grace_kid.py", "w+");f.write(CODE % (10, 10, 34, CODE, 34, 10, 39, 34, 34, 34, 34, 37, 39, 10, 10, 10));f.close();'

FT(MAIN)
