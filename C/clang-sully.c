#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <string.h>
#include <unistd.h>

#define SOURCE "#include <stdio.h>%c#include <fcntl.h>%c#include <stdlib.h>%c#include <sys/stat.h>%c#include <string.h>%c#include <unistd.h>%c%c#define SOURCE %c%s%c%c%cint create(char i){char n=10;char q=34;char child_source_file[] = %c./Sully_X.c%c;child_source_file[8] = i;int fd = open(child_source_file, O_WRONLY | O_CREAT | O_TRUNC, 0777);if (fd <= 0)return 1;dprintf(fd, SOURCE,n,n,n,n,n,n,n,q,SOURCE,q,n,n,q,q,n,q,q,n,q,q,n,n,i,n,n);close(fd);return 0;}%cint compile(char i){char compile_cmd[] = %cclang -Wall -Wextra -Werror Sully_X.c -o Sully_X%c;compile_cmd[34] = i;compile_cmd[47] = i;return(system(compile_cmd));}%cint execute(char i){char exe_cmd[] = %c./Sully_X%c;exe_cmd[8] = i;chmod(exe_cmd,0777);int sys = system(exe_cmd);return(sys);}%cint main(){%cint i = %c;%cchar check = __FILE__[strlen(__FILE__) - 3];if (i <= 0)return 0;else if ('1' <= check && check <= '5')i--;char c = '0' + i;if(create(c) != 0)return 1;if(compile(c) != 0)return 1;if (execute(c) != 0)return 1;return 0;}%c"

int create(char i){char n=10;char q=34;char child_source_file[] = "./Sully_X.c";child_source_file[8] = i;int fd = open(child_source_file, O_WRONLY | O_CREAT | O_TRUNC, 0777);if (fd <= 0)return 1;dprintf(fd, SOURCE,n,n,n,n,n,n,n,q,SOURCE,q,n,n,q,q,n,q,q,n,q,q,n,n,i,n,n);close(fd);return 0;}
int compile(char i){char compile_cmd[] = "clang -Wall -Wextra -Werror Sully_X.c -o Sully_X";compile_cmd[34] = i;compile_cmd[47] = i;return(system(compile_cmd));}
int execute(char i){char exe_cmd[] = "./Sully_X";exe_cmd[8] = i;chmod(exe_cmd,0777);int sys = system(exe_cmd);return(sys);}
int main(){
int i = 5;
char check = __FILE__[strlen(__FILE__) - 3];if (i <= 0)return 0;else if ('1' <= check && check <= '5')i--;char c = '0' + i;if(create(c) != 0)return 1;if(compile(c) != 0)return 1;if (execute(c) != 0)return 1;return 0;}
