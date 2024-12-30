#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *s = "#include <stdio.h>%1$c#include <stdlib.h>%1$c#include <string.h>%1$c%1$cint main()%1$c{%1$c	char *s = %2$c%4$s%2$c;%1$c	int i = %5$d;%1$c	i--;%1$c	char filename[28];%1$c	sprintf(filename, %2$cSully_%3$cd.c%2$c, i);%1$c	char cmd[58];%1$c	sprintf(cmd, %2$cgcc %3$cs -o Sully_%3$cd && ./Sully_%3$cd%2$c, filename, i, i);%1$c	FILE *file = fopen(filename, %2$cw%2$c);%1$c	if(!file)%1$c		exit(1);%1$c	fprintf(file, s, 10, 34, 37, s, i);%1$c	fclose(file);%1$c	if(i > 0)%1$c		system(cmd);%1$c	return 0;%1$c}%1$c";
	int i = 5;
	i--;
	char filename[28];
	sprintf(filename, "Sully_%d.c", i);
	char cmd[58];
	sprintf(cmd, "gcc %s -o Sully_%d && ./Sully_%d", filename, i, i);
	FILE *file = fopen(filename, "w");
	if(!file)
		exit(1);
	fprintf(file, s, 10, 34, 37, s, i);
	fclose(file);
	if(i > 0)
		system(cmd);
	return 0;
}
