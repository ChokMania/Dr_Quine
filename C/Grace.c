#include <stdio.h>
/*
	Define defines
*/
#define USELESS "I am useless"
#define CODE "#include <stdio.h>%c/*%c%cDefine defines%c*/%c#define USELESS %c%s%c%c#define CODE %c%s%c%c#define MAIN(x)int main(){fprintf(fopen(x, %cw%c), CODE, 10, 10, 9, 10, 10, 34, USELESS, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 34, 34, 10); return (1);}%c%cMAIN(%cGrace_kid.c%c)%c"
#define MAIN(x)int main(){fprintf(fopen(x, "w"), CODE, 10, 10, 9, 10, 10, 34, USELESS, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 34, 34, 10); return (1);}

MAIN("Grace_kid.c")
