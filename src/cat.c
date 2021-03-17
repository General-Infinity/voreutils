#include <stdio.h>
int main(int argc, char **argv){
  char fed;
  FILE *fp;
  fp = fopen(argv[1], "r");
  while((fed=fgetc(fp)) != EOF )
    fputc(fed, stdout);
  fclose(fp);
  return(0);
}
