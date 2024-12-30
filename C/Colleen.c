#include<stdio.h>
/*
	a comment
*/
char*s="#include<stdio.h>%c/*%c	a comment%c*/%cchar*s=%c%s%c;%cvoid quine(){printf(s,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10);}%cint main()%c{%c/*%c	another comment%c*/%cquine();%c}%c";
void quine(){printf(s,10,10,10,10,34,s,34,10,10,10,10,10,10,10,10,10);}
int main()
{
/*
	another comment
*/
quine();
}
