#include <stdio.h>
int main(int argc, char **argv){
  char fed;
  FILE *fp, *fp2;
  fp = fopen(argv[1], "r");
  fp2 = fopen(argv[2], "w");
  while((fed=fgetc(fp)) != EOF )
    fputc(fed, fp2);
  fclose(fp2);
  int after=remove(argv[1]);
  return(0);
}
