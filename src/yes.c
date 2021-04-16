#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]){
  char endres[500];

  for (int i; i<argc; i++){
    if(i!=0){
      strcat(endres, argv[i]);
      strcat(endres, " ");
    }
  } 
  if (!argv[1]){
    while(1){
      printf("y\n");
    }
  }
  else{
    while(1){
      printf("%s\n",endres);
    }
  }
  return 0;
}
