#include <stdio.h>
int main(int argc, char **argv){
  if(argc>2){
    printf("Too many arguments specified!\n");
    return(1);
  }
  if(!argc){
    printf("No filename specified!\n");
    return(1);
  }
  FILE *fp;
  fp=fopen(argv[1],"w");
  printf("File %s created!\n", argv[1]);
  return 0;
}
