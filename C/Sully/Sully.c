#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int i = 5;
	FILE *fd;

	if (--i < 0)
		return (0);
	if (__FILE__[strlen(__FILE__) - 3] == 'y')
		i += 1;
	char *code = "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c%cint main(void)%c{%c%cint i = %d;%c%cFILE *fd;%c%c%cif (--i < 0)%c%c%creturn (0);%c%cif (__FILE__[strlen(__FILE__) - 3] == 'y')%c%c%ci += 1;%c%cchar *code = %c%s%c;%c%cchar fname[] = %cSully_x.c%c;%c%cfname[6] = i + '0';%c%cif (!(fd = fopen(fname, %cw%c)))%c%c%creturn (-1);%c%cfprintf(fd, code, 10, 10, 10, 10, 10, 10, 9, i, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 34, code, 34, 10, 9, 34, 34, 10, 9, 10, 9, 34, 34, 10, 9, 9, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);%c%cfclose(fd);%c%cchar cmp[] = %cclang -Wall -Wextra -Werror Sully_x.c -o Sully_x; ./Sully_x%c;%c%ccmp[34] = i + '0';%c%ccmp[47] = i + '0';%c%ccmp[58] = i + '0';%c%csystem(cmp);%c%creturn (0);%c}%c";
	char fname[] = "Sully_x.c";
	fname[6] = i + '0';
	if (!(fd = fopen(fname, "w")))
		return (-1);
	fprintf(fd, code, 10, 10, 10, 10, 10, 10, 9, i, 10, 9, 10, 10, 9, 10, 9, 9, 10, 9, 10, 9, 9, 10, 9, 34, code, 34, 10, 9, 34, 34, 10, 9, 10, 9, 34, 34, 10, 9, 9, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 10, 9, 10, 9, 10, 9, 10, 10);
	fclose(fd);
	char cmp[] = "clang -Wall -Wextra -Werror Sully_x.c -o Sully_x; ./Sully_x";
	cmp[34] = i + '0';
	cmp[47] = i + '0';
	cmp[58] = i + '0';
	system(cmp);
	return (0);
}
