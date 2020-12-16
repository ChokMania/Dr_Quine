#include <stdio.h>
/*
	Define defines
*/
#define USELESS "I am useless"
#define CODE "#include <stdio.h>%c/*%c%cDefine defines%c*/%c#define USELESS %c%s%c%c#define CODE %c%s%c%c#define MAIN(x)int main(){FILE* fichier = NULL; fichier = fopen(x, %cw%c); if (fichier != NULL) {fprintf(fichier, CODE, 10, 10, 9, 10, 10, 34, USELESS, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 34, 34, 10);fclose(fichier);} return (0);}%c%cMAIN(%cGrace_kid.c%c)%c"
#define MAIN(x)int main(){FILE* fichier = NULL; fichier = fopen(x, "w"); if (fichier != NULL) {fprintf(fichier, CODE, 10, 10, 9, 10, 10, 34, USELESS, 34, 10, 34, CODE, 34, 10, 34, 34, 10, 10, 34, 34, 10);fclose(fichier);} return (0);}

MAIN("Grace_kid.c")
