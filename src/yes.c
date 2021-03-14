#include <stdio.h>
int main(int argc, char *argv[]){
  if (!argv[1]){
    while(1){
      printf("y\n");
    }
  }
  else{
    while(1){
      printf("%s\n",argv[1]);
    }
  }
  return 0;
}
