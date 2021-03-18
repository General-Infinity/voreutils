#include <stdio.h>
int main(int argc, char **argv){
  int file=remove(argv[1]);
  if(file){
    printf("Could not delete file! (write protected?)\n");
    return(1);
  }
  else
    printf("%s deleted successfully!\n", argv[1]);
  return(0);
}
