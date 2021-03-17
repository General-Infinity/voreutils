#include <stdio.h>
#include <unistd.h>
int main(){
  puts(getlogin());
  return(0);
}
