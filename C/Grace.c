#include<stdio.h>
#define STRING "#include<stdio.h>%c#define STRING %c%s%c%c#define MAIN() GRACE(STRING)%c#define GRACE(s)int main(){FILE *f=fopen(%cGrace_kid.c%c,%cw%c);fprintf(f,s,10,34,s,34,10,10,34,34,34,34,10,10,10,10,10);fclose(f);}%c/*%c	a comment%c*/%cMAIN()%c"
#define MAIN() GRACE(STRING)
#define GRACE(s)int main(){FILE *f=fopen("Grace_kid.c","w");fprintf(f,s,10,34,s,34,10,10,34,34,34,34,10,10,10,10,10);fclose(f);}
/*
	a comment
*/
MAIN()
