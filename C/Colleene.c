#include<stdio.h>
/*c1*/
char*s="#include<stdio.h>%c/*c1*/%cchar*s=%c%s%c;%cvoid quine(){printf(s,10,10,34,s,34,10,10,10);}%cint main(){/*c2*/quine();}%c";
void quine(){printf(s,10,10,34,s,34,10,10,10);}
int main(){/*c2*/quine();}
