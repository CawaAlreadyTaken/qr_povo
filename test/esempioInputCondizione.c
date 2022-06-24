#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(){
  char longest[255];
  int length;
  char buffer[255];
  int ok = 1;
  do{
    scanf("%s",buffer);
    if(strcmp(buffer,"quit") != 0){
      strcpy(buffer,longest);
      length = strlen(longest);
    }else{
      ok = 0;
    }
  }
  while(ok);

  return 0;
}
