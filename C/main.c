#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
int i=5;
if(--i>=0){
char c=i+'0';
char *cmd=malloc(sizeof(char)*47);
char *s=malloc(sizeof(char)*10);
strncpy(s,"Sully_x.c",9);
s[6]=c;
s[9]='\0';
FILE *f=fopen(s,"w");
char *code="#include<stdio.h>%c#include<stdlib.h>%c#include<string.h>%cint main(){%cint i=%d;%cif(--i>=0){%cchar c=i+'0';%cchar *cmd=malloc(sizeof(char)*47);%cchar *s=malloc(sizeof(char)*10);%cstrncpy(s,%cSully_x.c%c,9);%cs[6]=c;%cs[9]='%c0';%cFILE *f=fopen(s,%cw%c);%cchar *code=%c%s%c;%cfprintf(f,code,10,10,10,10,i,10,10,10,10,10,34,34,10,10,92,10,34,34,10,34,code,34,10,10,10,34,34,10,10,10,92,10,10,10,10);%cfclose(f);%cstrncpy(cmd,%cgcc -Wall -Werror -Wextra Sully_x.c -o Sully_x%c,45);%ccmd[45]=c;%ccmd[32]=c;%ccmd[46]='%c0';%csystem(cmd);%cfree(s);%cfree(cmd);}}%c";
fprintf(f,code,10,10,10,10,i,10,10,10,10,10,34,34,10,10,92,10,34,34,10,34,code,34,10,10,10,34,34,10,10,10,92,10,10,10,10);
fclose(f);
strncpy(cmd,"gcc -Wall -Werror -Wextra Sully_x.c -o Sully_x",45);
cmd[45]=c;
cmd[32]=c;
cmd[46]='\0';
system(cmd);
free(s);
free(cmd);}}
