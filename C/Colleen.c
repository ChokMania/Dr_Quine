#include <stdio.h>

/*
	Print function
*/

void print(char *s)
{
	printf(s, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 9, 10, 10);
}

int main(void)
{
	/*
		Main function
	*/
	char *s="#include <stdio.h>%c%c/*%c%cPrint function%c*/%c%cvoid print(char *s)%c{%c%cprintf(s, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 10, 10, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, s, 34, 10, 9, 10, 9, 10, 10);%c}%c%cint main(void)%c{%c%c/*%c%c%cMain function%c%c*/%c%cchar *s=%c%s%c;%c%cprint(s);%c%creturn (0);%c}%c";
	print(s);
	return (0);
}
