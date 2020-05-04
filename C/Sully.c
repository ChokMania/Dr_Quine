#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define I 5

int main(int ac, char **av)
{
	(void)ac;
	char *str = "#include <stdlib.h>%c#include <stdio.h>%c#include <string.h>%c#define I %d%c%cint main(int ac, char **av)%c{%c%c(void)ac;%c%cchar *str = %c%s%c;%c%cchar name[100], new[100], exec[100];%c%cint i;%c%ci = !(strcmp(av[0], %c./Sully%c)) ? I + 1 : I;%c%cif (i == 0)%c%c%creturn (0);%c%csprintf(name, %cSully_%cd%c, i - 1);%c%csprintf(new, %c%cs.c%c, name);%c%cFILE* fichier = NULL;%c%cfichier = fopen(new, %cw%c);%c%cif (fichier != NULL)%c%c%cfprintf(fichier, str, 10, 10, 10, i - 1, 10, 10, 10, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 9, 10, 9, 34, 37, 34, 10, 9, 34, 37, 34, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, 37, 37, 37, 34, 10, 9, 10, 9, 10, 10, 10);%c%cfclose(fichier);%c%csprintf(exec, %c/usr/bin/gcc -o %cs %cs && ./%cs%c, name, new, name);%c%csystem(exec);%c%creturn(0);%c}%c";
	char name[100], new[100], exec[100];
	int i;
	i = !(strcmp(av[0], "./Sully")) ? I + 1 : I;
	if (i == 0)
		return (0);
	sprintf(name, "Sully_%d", i - 1);
	sprintf(new, "%s.c", name);
	FILE* fichier = NULL;
	fichier = fopen(new, "w");
	if (fichier != NULL)
		fprintf(fichier, str, 10, 10, 10, i - 1, 10, 10, 10, 10, 9, 10, 9, 34, str, 34, 10, 9, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 9, 10, 9, 34, 37, 34, 10, 9, 34, 37, 34, 10, 9, 10, 9, 34, 34, 10, 9, 10, 9, 9, 10, 9, 10, 9, 34, 37, 37, 37, 34, 10, 9, 10, 9, 10, 10, 10);
	fclose(fichier);
	sprintf(exec, "/usr/bin/gcc -o %s %s && ./%s", name, new, name);
	system(exec);
	return(0);
}
